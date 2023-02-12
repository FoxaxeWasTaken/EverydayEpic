/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Request
*/

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <curl/curl.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <nlohmann/json.hpp>
#include <memory>

sf::Texture *RequestTexture(std::string request);
size_t write_data(void *ptr, size_t size, size_t nmemb, std::vector<char> *data);
