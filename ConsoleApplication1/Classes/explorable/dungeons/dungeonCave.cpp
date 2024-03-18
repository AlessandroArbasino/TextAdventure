#include "dungeonCave.h"


dungeonCave::dungeonCave(basicRoom** roomArray, int roomArraySize,std::string* exploreMessage,std::string* clearMessage) : explorable(roomArray,roomArraySize,exploreMessage,clearMessage)
{
}

//TODO delete null ptr do methods get and set
dungeonCave::dungeonCave(const dungeonCave& other) : explorable(other.getExplorableRooms(), other.getRoomArraySize(),nullptr,nullptr)
{
}

dungeonCave::~dungeonCave()
{
}
