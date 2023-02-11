/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Character
*/

#pragma once

#include <string>

namespace ee {

    enum gender {
        FEMALE = 0,
        MALE
    };

    enum hairColor {
        BLONDE = 0,
        BROWN,
        BLACK,
        RED
    };

    enum height {
        SHORT = 0,
        MEDIUM,
        TALL
    };

    enum style {
        CASUAL = 0,
        FORMAL,
        SPORTY,
        FASHIONABLE
    };

    class Character {
        public:
            Character(std::string name, hairColor hairColor, height height, gender gender, style style);
            ~Character() = default;

            std::string getName() const;
            std::string getHairColorString() const;
            std::string getHeightString() const;
            std::string getGenderString() const;
            std::string getStyleString() const;
            std::string getDescription() const;

        private:
            std::string _name;
            hairColor _hairColor;
            height _height;
            gender _gender;
            style _style;
    };
}
