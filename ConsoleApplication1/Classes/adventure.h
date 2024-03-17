#pragma once

class Player;
class explorable;

class adventure
{
    explorable** adventureSteps;
    int numSteps;
    void (*clearDelegate)(Player*);
public:
    
    adventure();

    adventure(const adventure& other);
    
    virtual ~adventure();

    void processAdventure(Player* currentPlayer,int& dungeonProgressionIndex);

    void clearAdventure(Player* currentPlayer);

    explorable** getExplorableRooms() const {return adventureSteps;}

    int getRoomArraySize() const {return numSteps;}
};
