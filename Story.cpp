/*
** EPITECH PROJECT, 2023
** EverydayEpic [WSL: Ubuntu]
** File description:
** Story
*/

#include "Story.hpp"

ee::Story::Story(std::string situation, std::string AChoice, std::string BChoice, std::shared_ptr<Character> hero, std::shared_ptr<Character> badGuy, storyType storyType)
    : _situation(situation), _AChoice(AChoice), _BChoice(BChoice), _hero(hero), _badGuy(badGuy), _storyType(storyType)
{

}

std::string ee::Story::getSituation() const
{
    return _situation;
}

std::string ee::Story::getAChoice() const
{
    return _AChoice;
}

std::string ee::Story::getBChoice() const
{
    return _BChoice;
}

std::shared_ptr<ee::Story> ee::Story::getAChoicePtr() const
{
    return _AChoicePtr;
}

void ee::Story::setAChoicePtr(std::shared_ptr<Story> AChoicePtr)
{
    _AChoicePtr = AChoicePtr;
}

std::shared_ptr<ee::Story> ee::Story::getBChoicePtr() const
{
    return _BChoicePtr;
}

void ee::Story::setBChoicePtr(std::shared_ptr<Story> BChoicePtr)
{
    _BChoicePtr = BChoicePtr;
}

std::shared_ptr<ee::Character> ee::Story::getHero() const
{
    return _hero;
}

std::shared_ptr<ee::Character> ee::Story::getBadGuy() const
{
    return _badGuy;
}

ee::storyType ee::Story::getStoryType() const
{
    return _storyType;
}
