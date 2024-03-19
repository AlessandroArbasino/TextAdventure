#include "dragon.h"

dragon::dragon(float* maxLife,float* basicAttack, float* magicAttack, BaseWeapon* baseWeapon,int* initiative) :
    enemyBase(maxLife,basicAttack,magicAttack,baseWeapon,initiative)
{
}

dragon::dragon(const dragon& other) : enemyBase(other)
{
}

dragon::~dragon()
{
}
