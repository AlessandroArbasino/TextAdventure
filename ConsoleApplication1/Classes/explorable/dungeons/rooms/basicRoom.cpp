#include "basicRoom.h"

#include <iostream>

basic_room::basic_room(std::string* exploreMessage, std::string* clearMessage) : exploreMessage(exploreMessage), clearMessage(clearMessage)
{
    
}

basic_room::basic_room(const basic_room& other)
{
}

basic_room::~basic_room()
{
    //chiedere come chimare il distruttore padre qunado la tratto come classe base per distruggere parametri non della classe base 
    
    delete exploreMessage;
    exploreMessage = nullptr;

    delete clearMessage;
    clearMessage=nullptr;
}

void basic_room::explore(Player* player, int& currentProgression)
{
    std::cout << *exploreMessage << " \n";
}

void basic_room::clear(Player* player, int& currentProgression)
{
    std::cout << *clearMessage<< " \n";
}


