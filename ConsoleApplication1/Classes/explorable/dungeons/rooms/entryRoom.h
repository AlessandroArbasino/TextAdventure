#pragma once
#include "basicRoom.h"

class entryRoom : public basic_room
{

public:
    entryRoom(std::string* exploreMessage,std::string* clearMessage);

    entryRoom(const entryRoom& other);

    ~entryRoom() override;
    
    void explore(Player* player,int& currentProgression) override;
    
    void clear(Player* player,int& currentProgression) override;
};


