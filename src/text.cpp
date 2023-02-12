/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** text
*/

#include "graphic.hpp"

ee::Text::Text()
{
    sf::Font font;
    font.loadFromFile("assets/police.ttf");

    _firstText = createText(font, "PLAY", 22, sf::Color::White, sf::Vector2f(462.0f, 487.0f));
    _secondText = createText(font, "Exit", 22, sf::Color::White, sf::Vector2f(350.0f, 550.0f));
}

ee::Text::~Text()
{

}

sf::Text ee::Text::createText(const sf::Font &font, const std::string &str, int size,const sf::Color &color, sf::Vector2f pos)
{
    sf::Text text;

    text.setFont(font);
    text.setString(str);
    text.setCharacterSize(size);
    text.setFillColor(color);
    text.setPosition(pos);
    return (text);
}

sf::Text & ee::Text::getText(size_t number)
{
    if (number == 0) {
        return (_firstText);
    }
    return (_secondText);
}

void ee::Text::setPosition(sf::Vector2f pos, size_t number)
{
    if (number == 0) {
        _firstText.setPosition(pos);
    } else {
        _secondText.setPosition(pos);
    }
}

