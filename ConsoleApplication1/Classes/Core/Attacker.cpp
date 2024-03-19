#include "Attacker.h"
#include "../weapons/baseWeapon.h"

Attacker::Attacker(float* basicAttack, float* magicAttack, BaseWeapon* baseWeapon,int* initiative) : basicAttack(basicAttack), magicAttack(magicAttack) , initiative(initiative),baseWeapon(baseWeapon)
{
}

Attacker::Attacker(const Attacker& other) : Attacker(new float(other.getBasicAttack()),new float(other.getMagicAttack()),new BaseWeapon(*other.getBaseWeapon()), new int (other.getInitiative()))
{
}

Attacker::~Attacker()
{
    delete basicAttack;
    basicAttack=nullptr;

    delete magicAttack;
    magicAttack=nullptr;

    delete baseWeapon;
    baseWeapon= nullptr;

    delete initiative;
    initiative= nullptr;
}

void Attacker::setWeapon(BaseWeapon* newWeapon)
{
    delete baseWeapon;
    baseWeapon= nullptr;

    baseWeapon=newWeapon;
}
