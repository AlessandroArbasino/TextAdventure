#include "lootRoom.h"

#include "../../../baseLoot/lootBase.h"
#include "../../../Core/helpers.h"

lootRoom::lootRoom(lootBase roomLoot,std::string* exploreMessage,std::string* clearMessage) : basic_room(exploreMessage,clearMessage),roomLoot( new lootBase(roomLoot))
{
}
//TODO delete null ptr
lootRoom::lootRoom(const lootRoom& other) : basic_room(nullptr,nullptr),roomLoot(other.roomLoot)
{
}

lootRoom::~lootRoom()
{
    delete roomLoot;
    roomLoot = nullptr;
}

void lootRoom::exploreRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::exploreRoom(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clearRoom(player,currentProgression);
    }
}

void lootRoom::clearRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::clearRoom(player, currentProgression);
    clearDelegate(player,++currentProgression);
}
