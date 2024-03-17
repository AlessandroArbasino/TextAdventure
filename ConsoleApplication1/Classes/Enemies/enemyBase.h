#pragma once
#include "../Core/damageble.h"

class enemyBase : public Damageble
{
    
public:
    enemyBase(float* maxLife);

    enemyBase(const enemyBase& other);

    virtual ~enemyBase();
};
