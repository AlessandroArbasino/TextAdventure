#pragma once
#include <string>

class Player;

class clearable
{
protected:
    std::string* exploreMessage;
    std::string* clearMessage;
public:
    void (clearable::*clearDelegate)(Player*,int&);
    
    clearable(std::string* exploreMessage,std::string* clearMessage);

    virtual ~clearable();
    
    virtual void explore(Player* player,int& exploreCounter)=0;

    virtual void clear(Player* player,int& exploreCounter)=0;
};
