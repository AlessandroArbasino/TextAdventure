#pragma once
#include "basicRoom.h"

class enemyBase;

class fightRoom : public  basic_room
{
    enemyBase* roomEnemy;
public:

    fightRoom(enemyBase* roomEnemy,std::string* exploreMessage,std::string* clearMessage);

   // fightRoom(const fightRoom& other);

    ~fightRoom() override;

    enemyBase* getRoomEnemy() const {return roomEnemy;}
    
    void explore(Player* player,int& currentProgression) override;
    
    void clear(Player* player,int& currentProgression) override;
};
