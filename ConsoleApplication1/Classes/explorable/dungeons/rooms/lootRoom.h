#pragma once
#include "basicRoom.h"

class lootBase;

class lootRoom : public basic_room
{
    lootBase* roomLoot;
public:
     lootRoom(lootBase roomLoot,std::string* exploreMessage,std::string* clearMessage);

    lootRoom(const lootRoom& other);

     ~lootRoom() override;

    //better to return pointer??
    lootBase* getLoot() const {return roomLoot;}
    
    void explore(Player* player,int& currentProgression) override;
    
    void clear(Player* player,int& currentProgression) override;
};
