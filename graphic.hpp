/*
** EPITECH PROJECT, 2023
** graphic
** File description:
** graphic
*/

#ifndef GRAPHIC_HPP_
#define GRAPHIC_HPP_
    #include <SFML/Window.hpp>
    #include <SFML/Graphics.hpp>
    #include <SFML/System.hpp>
    #include <SFML/OpenGL.hpp>
    #include "Story.hpp"
    #include <iostream>

namespace ee {
    enum windowState {
        MENU,
        PERSO,
        GAME,
        GLOOSE,
        GWIN,
    };

    class Button {
        public:
            Button();
            ~Button();

            sf::RectangleShape createButton(sf::Vector2f size, sf::Color color, sf::Vector2f pos);
            sf::RectangleShape getButton(size_t number);
            void setPosition(sf::Vector2f pos, size_t number);
            void setSize(sf::Vector2f size, size_t number);
            bool image;
        private:
            sf::RectangleShape _firstButton;
            sf::RectangleShape _secondButton;
    };

    class Text {
        public:
            Text();
            ~Text();

            sf::Text createText(const sf::Font &font, const std::string &str, int size,const sf::Color &color, sf::Vector2f pos);
            sf::Text & getText(size_t number);
            void setPosition(sf::Vector2f pos, size_t number);
        private:
            sf::Text _firstText;
            sf::Text _secondText;
    };

    class Perso : public Button, Text {
        public:
            Perso();
            ~Perso();

            sf::RectangleShape & getPersoButton(size_t number);
            sf::Text & getPersonText(size_t number);
            void setClick(bool isClick, size_t number);
            bool getClick(size_t number);
            void setGender(gender g);
            void setHairColor(hairColor h);
            void setHeight(height h);
            void setStyle(style s);
            ee::gender getGender();
            ee::hairColor getHairColor();
            ee::height getHeight();
            ee::style getStyle();
        private:
            ee::gender _gender;
            ee::hairColor _haircolor;
            ee::height _height;
            ee::style _style;
            sf::RectangleShape _choice[14];
            sf::Text _text[19];
            bool _click[12];
    };

    class Window {
        public:
            Window();
            ~Window();

            sf::RenderWindow & getWindow();
            windowState getStatus();
            void setStatus(windowState state);
            void gameLoop();
            void drawMenu(ee::Button button, ee::Text text);
            void drawPerso(ee::Perso *button);
            void drawGame(ee::Story *story, ee::Text textStory, sf::Text textSituation, ee::Button &buttonStory);
            void drawLoose(ee::Story *story, sf::Text textSituation, ee::Button & buttonStory);
            void drawWin(ee::Story *story, sf::Text textSituation, ee::Button & buttonStory);
        private:
            windowState _state;
            sf::RenderWindow _window;
            bool _characCreate;
    };

    class Event {
        public:
            Event();
            ~Event();

            void setEvent(sf::Event event);
            sf::Event getEvent();
            void eventMenu(ee::Button button, Window & window);
            void eventPerso(ee::Perso *perso, Window & window);
            ee::Story *eventGame(ee::Button & button, ee::Window & window, ee::Story *story);
        private:
            sf::Event _event;
    };
}

#endif /* !GRAPHIC_HPP_ */
