#pragma once
#include "../explorable.h"

class basicRoom;

class dungeonCave : public explorable
{
public:
    dungeonCave(basicRoom** roomArray,int roomArraySize);

    dungeonCave(const dungeonCave& other);

    virtual ~dungeonCave();
};
