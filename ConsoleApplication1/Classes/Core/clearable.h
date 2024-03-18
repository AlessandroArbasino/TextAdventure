#pragma once

class Player;

class clearable
{

public:
    void (clearable::*clearDelegate)(Player*,int&);
    
    clearable();

    virtual ~clearable();
    
    virtual void explore(Player* player,int& exploreCounter)=0;

    virtual void clear(Player* player,int& exploreCounter)=0;
};
