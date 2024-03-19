#include "enemyBase.h"
#include "../weapons/baseWeapon.h"

enemyBase::enemyBase(float* maxLife,float* baseDamage,float* magicDamage,BaseWeapon* baseWeapon,int* initiative) : Damageble(maxLife), Attacker(baseDamage,magicDamage,baseWeapon,initiative)
{
}

enemyBase::enemyBase(const enemyBase& other) : Damageble(other),Attacker(other)
{
}

enemyBase::~enemyBase()
{
}

void enemyBase::Attack(Damageble* other)
{
}
