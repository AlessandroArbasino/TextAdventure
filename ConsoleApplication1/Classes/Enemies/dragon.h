#pragma once
#include "enemyBase.h"

class dragon : public enemyBase
{
public:

    dragon(float* maxLife,float* basicAttack, float* magicAttack, BaseWeapon* baseWeapon,int* initiative);

    dragon(const dragon& other);

    virtual ~dragon();
    
};
