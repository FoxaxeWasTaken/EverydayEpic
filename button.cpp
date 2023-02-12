/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** button
*/

#include "graphic.hpp"

ee::Button::Button()
{
    image = true;
    _firstButton = createButton(sf::Vector2f(200.0f, 100.0f), sf::Color::Red, sf::Vector2f(412.0f, 462.0f));
    _secondButton = createButton(sf::Vector2f(100.0f, 50.0f), sf::Color::Blue, sf::Vector2f(50.0f, 900.0f));
}

ee::Button::~Button()
{

}

sf::RectangleShape ee::Button::createButton(sf::Vector2f size, sf::Color color, sf::Vector2f pos)
{
    sf::RectangleShape button;

    button.setSize(size);
    button.setPosition(pos);
    button.setFillColor(color);
    return (button);
}

sf::RectangleShape ee::Button::getButton(size_t number)
{
    if (number == 0) {
        return (_firstButton);
    }
    return (_secondButton);
}

void ee::Button::setPosition(sf::Vector2f pos, size_t number)
{
    if (number == 0) {
        _firstButton.setPosition(pos);
    } else {
        _secondButton.setPosition(pos);
    }
}

void ee::Button::setSize(sf::Vector2f size, size_t number)
{
    if (number == 0) {
        _firstButton.setSize(size);
    } else {
        _secondButton.setSize(size);
    }
}
