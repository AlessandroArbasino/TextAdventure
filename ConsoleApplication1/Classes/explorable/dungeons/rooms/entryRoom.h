#pragma once
#include "basicRoom.h"

class entryRoom : public basicRoom
{

public:
    entryRoom();

    entryRoom(const entryRoom& other);

    ~entryRoom() override;
    
    void exploreRoom(Player* player,int& currentProgression) override;
    
    void clearRoom(Player* player,int& currentProgression) override;
};


