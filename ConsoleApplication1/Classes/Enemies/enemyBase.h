#pragma once
#include "../Core/Attacker.h"
#include "../Core/damageble.h"

class enemyBase : public Damageble, public Attacker
{
    
public:
    enemyBase(float* maxLife,float* baseDamage,float* magicDamage,BaseWeapon* weapon,int* initiative);

    enemyBase(const enemyBase& other);

    ~enemyBase() override;
    
    void Attack(Damageble* other) override;
};
