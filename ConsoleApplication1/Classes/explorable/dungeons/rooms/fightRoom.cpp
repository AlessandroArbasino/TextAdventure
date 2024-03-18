#include "fightRoom.h"
#include "../../../Enemies/enemyBase.h"
#include "../../../Core/helpers.h"

fightRoom::fightRoom(enemyBase* roomEnemy,std::string* exploreMessage,std::string* clearMessage) : basic_room(exploreMessage, clearMessage), roomEnemy(roomEnemy)
{
}


fightRoom::~fightRoom()
{
    delete roomEnemy;
    roomEnemy = nullptr;
}



void fightRoom::exploreRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::exploreRoom(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clearRoom(player,currentProgression);
    }
}

void fightRoom::clearRoom(Player* player,int& currentProgression)
{
    if(!player) return;
        
    basic_room::clearRoom(player, currentProgression);
    clearDelegate(player,++currentProgression);
}
