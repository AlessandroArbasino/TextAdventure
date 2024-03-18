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

void lootRoom::explore(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::explore(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clear(player,currentProgression);
    }
    else
    {
        Helpers::PrintLoseDeletePlayerRef(player);
    }
}

void lootRoom::clear(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::clear(player, currentProgression);
    (this->*clearDelegate)(player,++currentProgression);
}
