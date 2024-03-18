#include "entryRoom.h"

#include <iostream>

#include "basicRoom.h"
#include "../../../player.h"
#include "../../../Core/helpers.h"

entryRoom::entryRoom(std::string* exploreMessage,std::string* clearMessage): basic_room(exploreMessage,clearMessage)
{
}

entryRoom::entryRoom(const entryRoom& other) : basic_room(other)
{
}

entryRoom::~entryRoom()
{
}

void entryRoom::exploreRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::exploreRoom(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clearRoom(player,currentProgression);
    }
}

void entryRoom::clearRoom(Player* player,int& currentProgression)
{
    if(!player) return;
    
    //calling base method correct??
    basic_room::clearRoom(player, currentProgression);
    clearDelegate(player,++currentProgression);
}


