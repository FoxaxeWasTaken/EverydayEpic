/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "graphic.hpp"
#include "Story.hpp"
#include "Request.hpp"

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
    srand(time(NULL));
    ee::Button button;
    ee::Text text;
    ee::Text textStory;
    sf::Text textSituation;
    ee::Button buttonStory;
    ee::Event event;
    ee::Perso perso;
    ee::Story *story;
    while(_window.isOpen()) {
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
                    story = event.eventGame(buttonStory, *this, story);
                    break;
                case GLOOSE:
                    break;
                case GWIN:
                    break;
            }
        }
        if (_state == GAME && _characCreate == false) {
            _characCreate = true;
            ee::Character hero("Jorris", perso.getHairColor(), perso.getHeight(), perso.getGender(), perso.getStyle());
            ee::Character bad("Vilain", perso.getHairColor(), perso.getHeight(), perso.getGender(), perso.getStyle());
            story = ee::createStory(std::make_shared<ee::Character>(hero), std::make_shared<ee::Character>(bad));
            story->spr.setPosition(0, 0);
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
                drawGame(story, textStory, textSituation, buttonStory);
                break;
            case GLOOSE:
                drawLoose(story, textSituation);
                break;
            case GWIN:
                drawWin(story, textSituation);
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
    font.loadFromFile("police.ttf");
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
    font.loadFromFile("police.ttf");
    for (int i = 0; i < 19; i++) {
        button->getPersonText(i).setFont(font);
        _window.draw(button->getPersonText(i));
    }
}

void ee::Window::drawGame(ee::Story *story, ee::Text textStory, sf::Text textSituation, ee::Button & buttonStory)
{
    sf::Font font;
    font.loadFromFile("police.ttf");
    textSituation.setString(story->getSituation());
    if (buttonStory.image == true) {
        story->spr.setTexture(*(RequestTexture(story->getDescription())));
        buttonStory.image = false;
    }
    textSituation.setCharacterSize(35);
    textSituation.setFillColor(sf::Color::Red);
    textSituation.setPosition(sf::Vector2f(100, 100));
    textSituation.setFont(font);
    buttonStory.setSize(sf::Vector2f(480, 200), 0);
    buttonStory.setSize(sf::Vector2f(480, 200), 1);
    buttonStory.setPosition(sf::Vector2f(16, 800), 0);
    buttonStory.setPosition(sf::Vector2f(528, 800), 1);
    textStory.getText(0).setString(story->getAChoice());
    textStory.getText(0).setFont(font);
    textStory.getText(0).setPosition(108 ,  900 - textStory.getText(0).getCharacterSize() / 2);
    textStory.getText(1).setString(story->getBChoice());
    textStory.getText(1).setFont(font);
    textStory.getText(1).setPosition(768 ,  900 - textStory.getText(1).getCharacterSize() / 2);

    _window.draw(story->spr);
    _window.draw(buttonStory.getButton(0));
    _window.draw(buttonStory.getButton(1));
    _window.draw(textStory.getText(0));
    _window.draw(textStory.getText(1));
    _window.draw(textSituation);
}

void ee::Window::drawLoose(ee::Story *story, sf::Text textSituation)
{
    sf::Font font;
    font.loadFromFile("police.ttf");
    textSituation.setString(story->getSituation());
    textSituation.setCharacterSize(35);
    textSituation.setFillColor(sf::Color::Red);
    textSituation.setPosition(sf::Vector2f(100, 100));
    textSituation.setFont(font);
    _window.draw(textSituation);
}

void ee::Window::drawWin(ee::Story *story, sf::Text textSituation)
{
    sf::Font font;
    font.loadFromFile("police.ttf");
    textSituation.setString(story->getSituation());
    textSituation.setCharacterSize(35);
    textSituation.setFillColor(sf::Color::Green);
    textSituation.setPosition(sf::Vector2f(100, 100));
    textSituation.setFont(font);
    _window.draw(textSituation);
}
