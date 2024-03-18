#pragma once
#include "basicRoom.h"

class entryRoom : public basic_room
{

public:
    entryRoom(std::string* exploreMessage,std::string* clearMessage);

    entryRoom(const entryRoom& other);

    ~entryRoom() override;
    
    void exploreRoom(Player* player,int& currentProgression) override;
    
    void clearRoom(Player* player,int& currentProgression) override;
};


