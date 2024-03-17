#pragma once
#include "enemyBase.h"

class goblin : public enemyBase
{
public:
    goblin(float* maxLife);

    goblin(const goblin& other);

    virtual ~goblin();
};
