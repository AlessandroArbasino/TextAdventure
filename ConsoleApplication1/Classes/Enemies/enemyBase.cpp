#include "enemyBase.h"

enemyBase::enemyBase(float* maxLife) : Damageble(maxLife)
{
}

enemyBase::enemyBase(const enemyBase& other) : Damageble(new float (other.getLife()))
{
}

enemyBase::~enemyBase()
{
}
