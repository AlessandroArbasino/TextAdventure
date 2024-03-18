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

void basic_room::exploreRoom(Player* player, int& currentProgression)
{
    std::cout << exploreMessage;
}

void basic_room::clearRoom(Player* player, int& currentProgression)
{
    std::cout << clearMessage;
}


