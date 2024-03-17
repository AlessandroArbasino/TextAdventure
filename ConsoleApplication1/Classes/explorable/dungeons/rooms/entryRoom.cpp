#include "entryRoom.h"

#include "basicRoom.h"

entryRoom::entryRoom(): basicRoom()
{
}

entryRoom::entryRoom(const entryRoom& other) : basicRoom(other)
{
}

entryRoom::~entryRoom()
{
}

void entryRoom::exploreRoom(Player* player,int& currentProgression)
{
    clearRoom(player,currentProgression);
}

void entryRoom::clearRoom(Player* player,int& currentProgression)
{
    clearDelegate(player,++currentProgression);
}


