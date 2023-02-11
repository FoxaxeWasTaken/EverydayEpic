/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "graphic.hpp"

int main()
{
    ee::Window game;
    game.gameLoop();
    return 0;
}

ee::Window::Window()
    : _state(MENU), _characCreate(false)
{
    _window.create(sf::VideoMode(1024, 1024), "Everiday Epic");
}

ee::Window::~Window()
{

}

sf::RenderWindow & ee::Window::getWindow()
{
    return (_window);
}

ee::windowState ee::Window::getStatus()
{
    return (_state);
}

void ee::Window::setStatus(windowState state)
{
    _state = state;
}

void ee::Window::gameLoop()
{
    ee::Button button;
    ee::Text text;
    ee::Event event;
    ee::Perso perso;
    while(_window.isOpen()) {
        if (_state == GAME && _characCreate == false) {
            _characCreate = true;
            ee::Character character("Jorris", perso.getHairColor(), perso.getHeight(), perso.getGender(), perso.getStyle());
            std::cout << character.getDescription() << std::endl;
        }
        sf::Event e;
        while (_window.pollEvent(e)) {
            event.setEvent(e);
            if (event.getEvent().type == sf::Event::Closed)
                _window.close();
            switch (_state) {
                case MENU:
                    event.eventMenu(button, *this);
                    break;
                case PERSO:
                    event.eventPerso(&perso, *this);
                    break;
                case GAME:

                    break;
            }
        }
        _window.clear();
        switch (_state) {
            case MENU:
                drawMenu(button, text);
                break;
            case PERSO:
                drawPerso(&perso);
                break;
            case GAME:
                break;
        }
        _window.display();
    }
}

void ee::Window::drawMenu(ee::Button button, ee::Text text)
{
    _window.draw(button.getButton(0));
    _window.draw(button.getButton(1));
    sf::Font font;
    font.loadFromFile("assets/Bird.ttf");
    text.getText(0).setFont(font);
    _window.draw(text.getText(0));
}

void ee::Window::drawPerso(ee::Perso *button)
{
    for (int i = 0; i < 2; i++) {
        if (button->getClick(i) == true) {
            button->getPersoButton(i).setFillColor(sf::Color::Blue);
        } else {
            button->getPersoButton(i).setFillColor(sf::Color::Red);
        }
        _window.draw(button->getPersoButton(i));
    }
    for (int i = 2; i < 6; i++) {
        if (button->getClick(i) == true) {
            button->getPersoButton(i).setFillColor(sf::Color::Blue);
        } else {
            button->getPersoButton(i).setFillColor(sf::Color::Red);
        }
        _window.draw(button->getPersoButton(i));
    }
    for (int i = 6; i < 9; i++) {
        if (button->getClick(i) == true) {
            button->getPersoButton(i).setFillColor(sf::Color::Blue);
        } else {
            button->getPersoButton(i).setFillColor(sf::Color::Red);
        }
        _window.draw(button->getPersoButton(i));
    }
    for (int i = 9; i < 12; i++) {
        if (button->getClick(i) == true) {
            button->getPersoButton(i).setFillColor(sf::Color::Blue);
        } else {
            button->getPersoButton(i).setFillColor(sf::Color::Red);
        }
        _window.draw(button->getPersoButton(i));
    }
    for (int i = 12; i < 14; i++) {
        _window.draw(button->getPersoButton(i));
    }
    sf::Font font;
    font.loadFromFile("assets/Bird.ttf");
    for (int i = 0; i < 19; i++) {
        button->getPersonText(i).setFont(font);
        _window.draw(button->getPersonText(i));
    }
}

