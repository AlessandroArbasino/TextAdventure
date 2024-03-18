#pragma once
#include "../player.h"

class basicRoom;

class explorable
{
    int roomArraySize;
    basicRoom** explorableRooms;

    std::string* exploreMessage;
    std::string* clearMessage;
    
public:
    void (*clearDelegate)(Player*,int&);
    
    explorable(basicRoom** explorableRooms,int roomArraySize,std::string* exploreMessage,std::string* clearMessage);

    explorable(const explorable& other);

    virtual ~explorable();

    basicRoom** getExplorableRooms() const {return explorableRooms;}

    int getRoomArraySize() const {return roomArraySize;}

    void exploreRoom(Player* player,int& exploreRoomIndex);

    void clearExplore(Player* currentPlayer,int& exploreRoomIndex);
};
