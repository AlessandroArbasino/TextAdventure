#pragma once
#include "../player.h"
#include "../Core/clearable.h"

class basic_room;

class explorable : public clearable
{
    int roomArraySize;
    basic_room** explorableRooms;

    std::string* exploreMessage;
    std::string* clearMessage;
    
public:
    
    explorable(basic_room** explorableRooms,int roomArraySize,std::string* exploreMessage,std::string* clearMessage);

    explorable(const explorable& other);

    ~explorable() override;

    basic_room** getExplorableRooms() const {return explorableRooms;}

    int getRoomArraySize() const {return roomArraySize;}

    void explore(Player* player,int& exploreRoomIndex) override;

    void clear(Player* currentPlayer,int& exploreRoomIndex) override;
};
