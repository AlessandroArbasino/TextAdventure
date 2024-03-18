#include "basicRoom.h"

#include <iostream>

basic_room::basic_room(std::string* exploreMessage, std::string* clearMessage) : clearable(exploreMessage,clearMessage)
{
    
}

basic_room::basic_room(const basic_room& other): clearable(nullptr,nullptr)
{
}

basic_room::~basic_room()
{

}

void basic_room::explore(Player* player, int& currentProgression)
{
    std::cout << *exploreMessage << " \n";
}

void basic_room::clear(Player* player, int& currentProgression)
{
    std::cout << *clearMessage<< " \n";
}


