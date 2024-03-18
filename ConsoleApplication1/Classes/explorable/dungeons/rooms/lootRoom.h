#pragma once
#include "basicRoom.h"

class lootBase;

class lootRoom : public basicRoom
{
    lootBase* roomLoot;
public:
     lootRoom(lootBase roomLoot,std::string* exploreMessage,std::string* clearMessage);

    lootRoom(const lootRoom& other);

     ~lootRoom() override;

    //better to return pointer??
    lootBase* getLoot() const {return roomLoot;}
    
    void exploreRoom(Player* player,int& currentProgression) override;
    
    void clearRoom(Player* player,int& currentProgression) override;
};
