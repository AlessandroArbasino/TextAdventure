#pragma once
#include "enemyBase.h"

class goblin : public enemyBase
{
public:
    goblin(float* maxLife,float* basicAttack, float* magicAttack, BaseWeapon* baseWeapon,int* initiative);

    goblin(const goblin& other);

    virtual ~goblin();
};
