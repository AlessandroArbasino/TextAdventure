#include "fightRoom.h"
#include "../../../Enemies/enemyBase.h"

fightRoom::fightRoom(enemyBase* roomEnemy) : basicRoom(), roomEnemy(roomEnemy)
{
}


fightRoom::~fightRoom()
{
    delete roomEnemy;
    roomEnemy = nullptr;
}



void fightRoom::exploreRoom(Player* player,int& currentProgression)
{
    clearRoom(player,currentProgression);
}

void fightRoom::clearRoom(Player* player,int& currentProgression)
{
    clearDelegate(player,++currentProgression);
}
