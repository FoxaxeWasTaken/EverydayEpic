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
    srand(time(NULL));
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
                drawLoose(story, textSituation, buttonStory);
                break;
            case GWIN:
                drawWin(story, textSituation, buttonStory);
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
    sf::FloatRect rect;
    font.loadFromFile("police.ttf");
    text.getText(0).setFont(font);
    text.getText(1).setFont(font);

    text.getText(0).setCharacterSize(45);
    text.getText(0).setPosition(button.getButton(0).getPosition() + button.getButton(0).getSize() / 2.0f);
    rect = text.getText(0).getLocalBounds();
    text.getText(0).setOrigin(rect.left + rect.width /  2.0f, rect.top + rect.height / 2.0f);
    _window.draw(text.getText(0));

    text.getText(1).setCharacterSize(45);
    text.getText(1).setPosition(button.getButton(1).getPosition() + button.getButton(1).getSize() / 2.0f);
    rect = text.getText(1).getLocalBounds();
    text.getText(1).setOrigin(rect.left + rect.width /  2.0f, rect.top + rect.height / 2.0f);
    _window.draw(text.getText(1));
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

    sf::FloatRect rect;
    button->getPersonText(18).setFont(font);
    button->getPersonText(18).setPosition(button->getPersoButton(13).getPosition() + button->getPersoButton(13).getSize() / 2.0f);
    rect = button->getPersonText(18).getLocalBounds();
    button->getPersonText(18).setOrigin(rect.left + rect.width /  2.0f, rect.top + rect.height / 2.0f);

    button->getPersonText(17).setFont(font);
    button->getPersonText(17).setPosition(button->getPersoButton(12).getPosition() + button->getPersoButton(12).getSize() / 2.0f);
    rect = button->getPersonText(17).getLocalBounds();
    button->getPersonText(17).setOrigin(rect.left + rect.width /  2.0f, rect.top + rect.height / 2.0f);

    button->getPersonText(0).setFillColor(sf::Color::Red);
    button->getPersonText(1).setFillColor(sf::Color::Green);
    button->getPersonText(4).setFillColor(sf::Color::Green);
    button->getPersonText(8).setFillColor(sf::Color::Green);
    button->getPersonText(13).setFillColor(sf::Color::Green);
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
    textSituation.setCharacterSize(22);
    textSituation.setFillColor(sf::Color::White);
    textSituation.setPosition(sf::Vector2f(0, 0));
    textSituation.setFont(font);
    buttonStory.setSize(sf::Vector2f(480, 75), 0);
    buttonStory.setSize(sf::Vector2f(480, 75), 1);
    buttonStory.setPosition(sf::Vector2f(16, 900), 0);
    buttonStory.setPosition(sf::Vector2f(528, 900), 1);

    story->RectSituation.setSize(sf::Vector2f(1024, 100));
    story->RectSituation.setPosition(0,50);
    story->RectSituation.setFillColor(sf::Color::Transparent);;

    textStory.getText(0).setString(story->getAChoice());
    textStory.getText(0).setFont(font);
    textStory.getText(0).setPosition(buttonStory.getButton(0).getPosition() + buttonStory.getButton(0).getSize() / 2.0f);
    story->textRect1 = textStory.getText(0).getLocalBounds();
    textStory.getText(0).setOrigin(story->textRect1.left + story->textRect1.width /  2.0f, story->textRect1.top + story->textRect1.height / 2.0f);

    textStory.getText(1).setString(story->getBChoice());
    textStory.getText(1).setFont(font);
    textStory.getText(1).setPosition(buttonStory.getButton(1).getPosition() + buttonStory.getButton(1).getSize() / 2.0f);
    story->textRect2 = textStory.getText(1).getLocalBounds();
    textStory.getText(1).setOrigin(story->textRect2.left + story->textRect2.width /  2.0f, story->textRect2.top + story->textRect2.height / 2.0f);

    textSituation.setPosition(story->RectSituation.getPosition() + story->RectSituation.getSize() / 2.0f);
    story->textRect3 = textSituation.getLocalBounds();
    textSituation.setOrigin(story->textRect3.left + story->textRect3.width /  2.0f, story->textRect3.top + story->textRect3.height / 2.0f);

    story->spr.setPosition(sf::Vector2f(256, 256));

    _window.draw(story->spr);
    _window.draw(buttonStory.getButton(0));
    _window.draw(buttonStory.getButton(1));
    _window.draw(textStory.getText(0));
    _window.draw(textStory.getText(1));
    _window.draw(textSituation);
}

void ee::Window::drawLoose(ee::Story *story, sf::Text textSituation, ee::Button & buttonStory)
{
    sf::Font font;
    font.loadFromFile("police.ttf");
    textSituation.setString(story->getSituation());
    textSituation.setCharacterSize(35);
    textSituation.setFillColor(sf::Color::Red);
    textSituation.setPosition(sf::Vector2f(100, 100));
    textSituation.setFont(font);
    if (buttonStory.image == true) {
        story->spr.setTexture(*(RequestTexture(story->getDescription())));
        buttonStory.image = false;
    }
    story->spr.setPosition(sf::Vector2f(256, 256));

    sf::FloatRect rect;
    story->RectSituation.setSize(sf::Vector2f(1024, 100));
    story->RectSituation.setPosition(0,50);
    story->RectSituation.setFillColor(sf::Color::Transparent);;
    textSituation.setPosition(story->RectSituation.getPosition() + story->RectSituation.getSize() / 2.0f);
    rect = textSituation.getLocalBounds();
    textSituation.setOrigin(rect.left + rect.width /  2.0f, rect.top + rect.height / 2.0f);

    _window.draw(story->spr);
    _window.draw(textSituation);
}

void ee::Window::drawWin(ee::Story *story, sf::Text textSituation, ee::Button & buttonStory)
{
    sf::Font font;
    font.loadFromFile("police.ttf");
    textSituation.setString(story->getSituation());
    textSituation.setCharacterSize(35);
    textSituation.setFillColor(sf::Color::Green);
    textSituation.setPosition(sf::Vector2f(100, 100));
    textSituation.setFont(font);
    if (buttonStory.image == true) {
        story->spr.setTexture(*(RequestTexture(story->getDescription())));
        buttonStory.image = false;
    }
    story->spr.setPosition(sf::Vector2f(256, 256));
    _window.draw(story->spr);
    _window.draw(textSituation);
}
