#pragma once
#include "../player.h"

class basic_room;

class explorable
{
    int roomArraySize;
    basic_room** explorableRooms;

    std::string* exploreMessage;
    std::string* clearMessage;
    
public:
    void (*clearDelegate)(Player*,int&);
    
    explorable(basic_room** explorableRooms,int roomArraySize,std::string* exploreMessage,std::string* clearMessage);

    explorable(const explorable& other);

    virtual ~explorable();

    basic_room** getExplorableRooms() const {return explorableRooms;}

    int getRoomArraySize() const {return roomArraySize;}

    void exploreRoom(Player* player,int& exploreRoomIndex);

    void clearExplore(Player* currentPlayer,int& exploreRoomIndex);
};
