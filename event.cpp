/*
** EPITECH PROJECT, 2023
** Event
** File description:
** Event
*/

#include "graphic.hpp"

ee::Event::Event()
{
    sf::Event e;
    _event = e;
}

ee::Event::~Event()
{

}

sf::Event ee::Event::getEvent()
{
    return (_event);
}

void ee::Event::setEvent(sf::Event Event)
{
    _event = Event;
}

void ee::Event::eventMenu(ee::Button button, ee::Window & window)
{
    if (_event.type == sf::Event::MouseButtonReleased &&
        _event.mouseButton.button == sf::Mouse::Left) {
        sf::Vector2i mousePos = sf::Mouse::getPosition(window.getWindow());
        if (button.getButton(0).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            window.setStatus(PERSO);
        }
    }
}

void ee::Event::eventPerso(ee::Perso *perso, ee::Window & window)
{
    if (_event.type == sf::Event::MouseButtonReleased &&
        _event.mouseButton.button == sf::Mouse::Left) {
        sf::Vector2i mousePos = sf::Mouse::getPosition(window.getWindow());
        for (int i = 0; i < 2; i++) {
            if (perso->getPersoButton(i).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                for (int j = 0; j < 2; j++) {
                    if (j!=i) {
                        perso->setClick(false, j);
                    }
                }
                perso->setClick(true, i);
                perso->setGender(static_cast<ee::gender>(i));
            }
        }
        for (int i = 2; i < 6; i++) {
            if (perso->getPersoButton(i).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                for (int j = 2; j < 6; j++) {
                    if (j!=i) {
                        perso->setClick(false, j);
                    }
                }
                perso->setClick(true, i);
                perso->setHairColor(static_cast<ee::hairColor>(i-2));
            }
        }
        for (int i = 6; i < 9; i++) {
            if (perso->getPersoButton(i).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                for (int j = 6; j < 9; j++) {
                    if (j!=i) {
                        perso->setClick(false, j);
                    }
                }
                perso->setClick(true, i);
                perso->setStyle(static_cast<ee::style>(i-6));
            }
        }
        for (int i = 9; i < 12; i++) {
            if (perso->getPersoButton(i).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                for (int j = 9; j < 12; j++) {
                    if (j!=i) {
                        perso->setClick(false, j);
                    }
                }
                perso->setClick(true, i);
                perso->setHeight(static_cast<ee::height>(i-9));
            }
        }
        if (perso->getPersoButton(12).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            window.setStatus(MENU);
        }
        if (perso->getPersoButton(13).getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            window.setStatus(GAME);
        }
    }
}
