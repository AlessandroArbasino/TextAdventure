#include "baseWeapon.h"

BaseWeapon::BaseWeapon(float weaponDamage) : damage(new float(weaponDamage))
{
}

BaseWeapon::BaseWeapon(const BaseWeapon& other)
{
}

BaseWeapon::~BaseWeapon()
{
    delete damage;
    damage=nullptr;
}
