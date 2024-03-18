#pragma once
#include "../explorable.h"

class basic_room;

class dungeonCave : public explorable
{
public:
    dungeonCave(basic_room** roomArray,int roomArraySize,std::string* exploreMessage,std::string* clearMessage);

    dungeonCave(const dungeonCave& other);

     ~dungeonCave() override;
};
