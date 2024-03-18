#include "Clearable.h"

clearable::clearable(std::string* exploreMessage, std::string* clearMessage) : exploreMessage(exploreMessage), clearMessage(clearMessage)
{
}

clearable::~clearable()
{
    //chiedere come chimare il distruttore padre qunado la tratto come classe base per distruggere parametri non della classe base 
    
    delete exploreMessage;
    exploreMessage = nullptr;

    delete clearMessage;
    clearMessage=nullptr;
}
