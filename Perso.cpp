/*
** EPITECH PROJECT, 2023
** Perso
** File description:
** Perso
*/

#include "graphic.hpp"

ee::Perso::Perso()
{
    sf::Font font;
    font.loadFromFile("assets/Bird.ttf");

    _choice[0] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 242.0f));
    _choice[1] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 334.0f));

    _choice[2] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 518.0f));
    _choice[3] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 610.0f));
    _choice[4] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 702.0f));
    _choice[5] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(412.0f, 794.0f));

    _choice[6] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 242.0f));
    _choice[7] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 334.0f));
    _choice[8] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 426.0f));

    _choice[9] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 610.0f));
    _choice[10] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 702.0f));
    _choice[11] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 794.0f));

    _choice[12] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(100.0f, 886.0f));
    _choice[13] = createButton(sf::Vector2f(50.0f, 50.0f), sf::Color::Red, sf::Vector2f(924.0f, 886.0f));

    _text[0] = createText(font, "Character", 35, sf::Color::White, sf::Vector2f(462.0f, 25.0f));
    _text[1] = createText(font, "Genre", 35, sf::Color::White, sf::Vector2f(206.0f, 150.0f));
    _text[2] = createText(font, "Femme", 35, sf::Color::White, sf::Vector2f(150.0f, 242.0f));
    _text[3] = createText(font, "Homme", 35, sf::Color::White, sf::Vector2f(150.0f, 334.0f));

    _text[4] = createText(font, "Style", 35, sf::Color::White, sf::Vector2f(718.0f, 150.0f));
    _text[5] = createText(font, "Occasionnel", 35, sf::Color::White, sf::Vector2f(662.0f, 242.0f));
    _text[6] = createText(font, "Sportif", 35, sf::Color::White, sf::Vector2f(662.0f, 334.0f));
    _text[7] = createText(font, "Tendance", 35, sf::Color::White, sf::Vector2f(662.0f, 426.0f));

    _text[8] = createText(font, "Couleur de cheveux", 35, sf::Color::White, sf::Vector2f(206.0f, 426.0f));
    _text[9] = createText(font, "Blond", 35, sf::Color::White, sf::Vector2f(150.0f, 518.0f));
    _text[10] = createText(font, "Marron", 35, sf::Color::White, sf::Vector2f(150.0f, 610.0f));
    _text[11] = createText(font, "Noir", 35, sf::Color::White, sf::Vector2f(150.0f, 702.0f));
    _text[12] = createText(font, "Roux", 35, sf::Color::White, sf::Vector2f(150.0f, 794.0f));

    _text[13] = createText(font, "Taille", 35, sf::Color::White, sf::Vector2f(718.0f, 518.0f));
    _text[14] = createText(font, "Petit", 35, sf::Color::White, sf::Vector2f(662.0f, 610.0f));
    _text[15] = createText(font, "Moyen", 35, sf::Color::White, sf::Vector2f(662.0f, 702.0f));
    _text[16] = createText(font, "Grand", 35, sf::Color::White, sf::Vector2f(662.0f, 794.0f));

    _text[17] = createText(font, "Exit", 35, sf::Color::White, sf::Vector2f(100.0f, 886.0f));
    _text[18] = createText(font, "OK", 35, sf::Color::White, sf::Vector2f(924.0f, 886.0f));

    for (int i = 0; i < 12; i++) {
        _click[i] = false;
    }
    _click[0] = true;
    _click[2] = true;
    _click[6] = true;
    _click[9] = true;

    _gender = FEMALE;
    _haircolor = BLONDE;
    _height = SHORT;
    _style = CASUAL;
}

ee::Perso::~Perso()
{
}

sf::RectangleShape & ee::Perso::getPersoButton(size_t number)
{
    return (_choice[number]);
}

sf::Text & ee::Perso::getPersonText(size_t number)
{
    return (_text[number]);
}

void ee::Perso::setClick(bool isClick, size_t number)
{
    _click[number] = isClick;
}

bool ee::Perso::getClick(size_t number)
{
    return (_click[number]);
}

void ee::Perso::setGender(gender g)
{
    _gender = g;
}

void ee::Perso::setHairColor(hairColor h)
{
    _haircolor = h;
}

void ee::Perso::setHeight(height h)
{
    _height = h;
}

void ee::Perso::setStyle(style s)
{
    _style = s;
}

ee::gender ee::Perso::getGender()
{
    return (_gender);
}

ee::hairColor ee::Perso::getHairColor()
{
    return (_haircolor);
}

ee::height ee::Perso::getHeight()
{
    return (_height);
}

ee::style ee::Perso::getStyle()
{
    return (_style);
}
