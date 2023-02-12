/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Story
*/

#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <memory>
#include "Character.hpp"

namespace ee {

    enum storyType {
        WIN = 0,
        LOOSE,
        INGAME
    };

    class Story {
        public:
            Story(std::string situtation, std::string description, std::string AChoice, std::string BChoice, std::shared_ptr<Character> hero, std::shared_ptr<Character> badGuy, storyType storyType = INGAME);
            ~Story() = default;

            std::string getSituation() const;
            std::string getAChoice() const;
            std::string getBChoice() const;
            Story *getAChoicePtr() const;
            void setAChoicePtr(Story *AChoicePtr);
            Story *getBChoicePtr() const;
            void setBChoicePtr(Story *BChoicePtr);
            std::shared_ptr<Character> getHero() const;
            std::shared_ptr<Character> getBadGuy() const;
            storyType getStoryType() const;
            std::string getDescription() const;
            sf::Sprite spr;
        private:
            std::string _situation;
            std::string _description;
            std::string _AChoice;
            std::string _BChoice;
            Story *_AChoicePtr;
            Story *_BChoicePtr;
            std::shared_ptr<Character> _hero;
            std::shared_ptr<Character> _badGuy;
            storyType _storyType;
    };

    Story *createStory(std::shared_ptr<ee::Character> heroPtr, std::shared_ptr<ee::Character> badGuyPtr);
}
