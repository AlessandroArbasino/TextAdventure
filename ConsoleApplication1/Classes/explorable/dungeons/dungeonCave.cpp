#include "dungeonCave.h"


dungeonCave::dungeonCave(basicRoom** roomArray, int roomArraySize) : explorable(roomArray,roomArraySize)
{
}

dungeonCave::dungeonCave(const dungeonCave& other) : explorable(other.getExplorableRooms(), other.getRoomArraySize())
{
}

dungeonCave::~dungeonCave()
{
}
