#include "lootRoom.h"

#include "../../../baseLoot/lootBase.h"

lootRoom::lootRoom(lootBase roomLoot) : roomLoot( new lootBase(roomLoot))
{
}

lootRoom::lootRoom(const lootRoom& other) : roomLoot(other.roomLoot)
{
}

lootRoom::~lootRoom()
{
    delete roomLoot;
    roomLoot = nullptr;
}

void lootRoom::exploreRoom(Player* player,int& currentProgression)
{
    clearRoom(player,currentProgression);
}

void lootRoom::clearRoom(Player* player,int& currentProgression)
{
    clearDelegate(player,++currentProgression);
}
