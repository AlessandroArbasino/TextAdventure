#include "basicRoom.h"

#include <iostream>

basicRoom::basicRoom(std::string* exploreMessage, std::string* clearMessage) : exploreMessage(exploreMessage), clearMessage(clearMessage)
{
    
}

basicRoom::basicRoom(const basicRoom& other)
{
}

basicRoom::~basicRoom()
{
    //chiedere come chimare il distruttore padre qunado la tratto come classe base per distruggere parametri non della classe base 
    
    delete exploreMessage;
    exploreMessage = nullptr;

    delete clearMessage;
    clearMessage=nullptr;
}

void basicRoom::exploreRoom(Player* player, int& currentProgression)
{
    std::cout << exploreMessage;
}

void basicRoom::clearRoom(Player* player, int& currentProgression)
{
    std::cout << clearMessage;
}


