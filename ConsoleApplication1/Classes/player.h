#pragma once
#include <string>

#include "Core/Attacker.h"
#include "core/damageble.h"

class Player : public Damageble,public Attacker
{
    std::string* name;
public:
    
    Player(std::string name,float maxlife,float* baseDamage,float* magicDamage,int* initiative);

    Player(const Player& other);

    ~Player() override;
    
    std::string getName() const {return *name;}

    void setName(const std::string newName) const {*name = newName;}
    
    void Attack(Damageble* other) override;
};
