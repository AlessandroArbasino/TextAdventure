#include "explorable.h"

#include <iostream>

#include "../adventure.h"
#include "dungeons/rooms/basicRoom.h"
#include "../Core/helpers.h"

explorable::explorable(basicRoom** explorableRooms,int roomArraySize) : explorableRooms{explorableRooms},roomArraySize(roomArraySize)
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

void explorable::exploreRoom(Player* player,int& exploreRoomIndex)
{
    if(Helpers::PrintChoice())
    {
        if(exploreRoomIndex>=roomArraySize)
        {
            clearExplore(player,exploreRoomIndex);
            return;
        }

        //chiedere
        explorableRooms[exploreRoomIndex]->clearDelegate= this->exploreRoom;
        explorableRooms[exploreRoomIndex]->exploreRoom(player,exploreRoomIndex);
    }
}

void explorable::clearExplore(Player* currentPlayer,int& exploreRoomIndex)
{
    std::cout<< "congratulation player " << currentPlayer <<" you cleared this dungeon now you are ready to procede with your adventure ";

    //avoinding counting for cleared rooms
    exploreRoomIndex= exploreRoomIndex+1-roomArraySize;
    clearDelegate(currentPlayer,exploreRoomIndex);
    delete this;
    //destroy the super class not just this may be into deconstructor
}
