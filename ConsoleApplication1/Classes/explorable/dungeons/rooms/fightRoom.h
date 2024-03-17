#pragma once
#include "basicRoom.h"

class enemyBase;

class fightRoom : public  basicRoom
{
    enemyBase* roomEnemy;
public:

    fightRoom(enemyBase* roomEnemy);

   // fightRoom(const fightRoom& other);

    ~fightRoom() override;

    enemyBase* getRoomEnemy() const {return roomEnemy;}
    
    void exploreRoom(Player* player,int& currentProgression) override;
    
    void clearRoom(Player* player,int& currentProgression) override;
};
