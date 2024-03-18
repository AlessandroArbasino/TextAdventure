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

void entryRoom::explore(Player* player,int& currentProgression)
{
    if(!player) return;
    
    basic_room::explore(player, currentProgression);

    if(Helpers::PrintChoice())
    {
        clear(player,currentProgression);
    }
}

void entryRoom::clear(Player* player,int& currentProgression)
{
    if(!player) return;
    
    //calling base method correct??
    basic_room::clear(player, currentProgression);
    (this->*clearDelegate)(player,++currentProgression);
}


