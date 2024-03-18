#pragma once
#include "../explorable.h"

class basicRoom;

class dungeonCave : public explorable
{
public:
    dungeonCave(basicRoom** roomArray,int roomArraySize,std::string* exploreMessage,std::string* clearMessage);

    dungeonCave(const dungeonCave& other);

     ~dungeonCave() override;
};
