#include "Request.hpp"

using json = nlohmann::json;

size_t write_data(void *ptr, size_t size, size_t nmemb, std::vector<char> *data)
{
    size_t index = data->size();
    size_t n = size * nmemb;
    data->resize(index + n);
    memcpy(&((*data)[index]), ptr, n);
    return n;
}

sf::Texture *RequestTexture(std::string request)
{
    CURL *curl;
    CURLcode res;
    std::string API_KEY = std::getenv("OPENAI_API_KEY");
    char buffer[250] = "Authorization: Bearer ";
    std::string fullRequest("{\"prompt\":\"" + request + "\",\"n\":1,\"size\":\"1024x1024\"}");
    sf::Texture *texture = new sf::Texture();

    curl = curl_easy_init();
    if (curl) {
        std::vector<char> responseData;
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/images/generations");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &responseData);
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, strcat(buffer, API_KEY.c_str()));
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, fullRequest.c_str());
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);

        std::string response(responseData.begin(), responseData.end());
        json j = json::parse(response);
        std::string imageUrl = j["data"][0]["url"];
        CURL *imageCurl;
        imageCurl = curl_easy_init();
        if (imageCurl) {
            std::vector<char> imageData;
            curl_easy_setopt(imageCurl, CURLOPT_URL, imageUrl.c_str());
            curl_easy_setopt(imageCurl, CURLOPT_WRITEFUNCTION, write_data);
            curl_easy_setopt(imageCurl, CURLOPT_WRITEDATA, &imageData);
            res = curl_easy_perform(imageCurl);
            if (res != CURLE_OK) {
                std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
            }
            curl_easy_cleanup(imageCurl);

            sf::Image image;
            image.loadFromMemory(imageData.data(), imageData.size());
            texture->loadFromImage(image);
        }
    }
    return texture;
}
