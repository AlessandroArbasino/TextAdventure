#pragma once
#include <string>

#include "core/damageble.h"

class Player : Damageble
{
    std::string* name;
public:
    
    Player(std::string name,float maxlife);

    Player(const Player& other);

    virtual ~Player();
    
    std::string getName() const {return *name;}

    void setName(const std::string newName) const {*name = newName;}
};
