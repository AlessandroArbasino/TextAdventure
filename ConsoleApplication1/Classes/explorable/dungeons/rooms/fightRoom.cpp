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



void fightRoom::explore(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::explore(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clear(player,currentProgression);
    }
}

void fightRoom::clear(Player* player,int& currentProgression)
{
    if(!player) return;
        
    basic_room::clear(player, currentProgression);
    (this->*clearDelegate)(player,++currentProgression);
}
