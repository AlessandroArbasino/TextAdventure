#pragma once
#include <string>

#include "Core/clearable.h"

class Player;
class explorable;

class adventure : public clearable
{
    explorable** adventureSteps;
    int numSteps;
    std::string* beginAdventureString;
    std::string* endAdventureString;
public:
    
    adventure();

    adventure(const adventure& other);

    ~adventure() override;

    void explore(Player* currentPlayer,int& dungeonProgressionIndex) override;

    void clear(Player* currentPlayer,int& dungeonProgressionIndex) override;

    explorable** getExplorableRooms() const {return adventureSteps;}

    int getRoomArraySize() const {return numSteps;}
};
