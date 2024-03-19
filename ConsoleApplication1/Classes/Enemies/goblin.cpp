#include "goblin.h"

goblin::goblin(float* maxLife,float* basicAttack, float* magicAttack, BaseWeapon* baseWeapon,int* initiative) : enemyBase(maxLife,basicAttack,magicAttack,baseWeapon,initiative)
{
}

goblin::goblin(const goblin& other) : enemyBase(other)
{
}

goblin::~goblin()
{
}
