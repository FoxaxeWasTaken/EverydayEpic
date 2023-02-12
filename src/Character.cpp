/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Player
*/

#include "Character.hpp"

ee::Character::Character(std::string name, hairColor hairColor, height height, gender gender, style style)
    : _name(name), _hairColor(hairColor), _height(height), _gender(gender), _style(style)
{

}

std::string ee::Character::getName() const
{
    return _name;
}

std::string ee::Character::getHairColorString() const
{
    switch (_hairColor) {
        case BLONDE:
            return "blonde";
        case BROWN:
            return "brown";
        case BLACK:
            return "black";
        case RED:
            return "red";
        default:
            return "unknown";
    }
}

std::string ee::Character::getHeightString() const
{
    switch (_height) {
        case SHORT:
            return "short";
        case MEDIUM:
            return "medium";
        case TALL:
            return "tall";
        default:
            return "unknown";
    }
}

std::string ee::Character::getGenderString() const
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
        default:
            return "unknown";
    }
}

std::string ee::Character::getStyleString() const
{
    switch (_style) {
        case CASUAL:
            return "casual";
        case SPORTY:
            return "sporty";
        case FASHIONABLE:
            return "fashionable";
        default:
            return "unknown";
    }
}

std::string ee::Character::getDescription() const
{
    return "A " + getGenderString() + " with " + getHairColorString() + " hair, " + getHeightString() + " height and dressed in a " + getStyleString() + " style.";
}
