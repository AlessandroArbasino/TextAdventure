#include "explorable.h"

#include <iostream>

#include "../adventure.h"
#include "dungeons/rooms/basicRoom.h"
#include "../Core/helpers.h"

explorable::explorable(basic_room** explorableRooms,int roomArraySize,std::string* exploreMessage,std::string* clearMessage) : roomArraySize(roomArraySize),
    explorableRooms{explorableRooms},exploreMessage(exploreMessage),clearMessage(clearMessage)
{
}

explorable::explorable(const explorable& other)
{
}

explorable::~explorable()
{
    for(int i =0;i<roomArraySize;i++)
    {
        delete explorableRooms[i];
        explorableRooms[i]=nullptr;
    }
}

void explorable::explore(Player* player,int& exploreRoomIndex)
{
    if(!player) return;
    
    std::cout<< *exploreMessage;
    if(Helpers::PrintChoice())
    {
        if(exploreRoomIndex>=roomArraySize)
        {
            clear(player,exploreRoomIndex);
            return;
        }

        //chiedere
        explorableRooms[exploreRoomIndex]->clearDelegate= &clearable::explore;
        explorableRooms[exploreRoomIndex]->explore(player,exploreRoomIndex);
    }
    else
    {
        Helpers::PrintLoseDeletePlayerRef(player);
    }
}

void explorable::clear(Player* currentPlayer,int& exploreRoomIndex)
{
    if(!currentPlayer) return;
    
    std::cout<< *clearMessage;

    //avoinding counting for cleared rooms
    exploreRoomIndex= exploreRoomIndex+1-roomArraySize;
    (this->*clearDelegate)(currentPlayer,exploreRoomIndex);
    
}
