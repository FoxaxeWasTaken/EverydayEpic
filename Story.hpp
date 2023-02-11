/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Story
*/

#pragma once

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
            Story(std::string situtation, std::string AChoice, std::string BChoice, std::shared_ptr<Character> hero, std::shared_ptr<Character> badGuy, storyType storyType = INGAME);
            ~Story() = default;

            std::string getSituation() const;
            std::string getAChoice() const;
            std::string getBChoice() const;
            std::shared_ptr<Story> getAChoicePtr() const;
            void setAChoicePtr(std::shared_ptr<Story> AChoicePtr);
            std::shared_ptr<Story> getBChoicePtr() const;
            void setBChoicePtr(std::shared_ptr<Story> BChoicePtr);
            std::shared_ptr<Character> getHero() const;
            std::shared_ptr<Character> getBadGuy() const;
            storyType getStoryType() const;

        private:
            std::string _situation;
            std::string _AChoice;
            std::string _BChoice;
            std::shared_ptr<Story> _AChoicePtr;
            std::shared_ptr<Story> _BChoicePtr;
            std::shared_ptr<Character> _hero;
            std::shared_ptr<Character> _badGuy;
            storyType _storyType;
    };
}
