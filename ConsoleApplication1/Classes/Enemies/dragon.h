#pragma once
#include "enemyBase.h"

class dragon : public enemyBase
{
public:

    dragon(float* maxLife);

    dragon(const dragon& other);

    virtual ~dragon();
    
};
