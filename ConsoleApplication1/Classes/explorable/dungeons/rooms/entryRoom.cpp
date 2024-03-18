#include "entryRoom.h"

#include <iostream>

#include "basicRoom.h"
#include "../../../player.h"
#include "../../../Core/helpers.h"

entryRoom::entryRoom(std::string* exploreMessage,std::string* clearMessage): basicRoom(exploreMessage,clearMessage)
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
    if(!player) return;
    
    basicRoom::exploreRoom(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clearRoom(player,currentProgression);
    }
}

void entryRoom::clearRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    //calling base method correct??
    basicRoom::clearRoom(player, currentProgression);
    clearDelegate(player,++currentProgression);
}


