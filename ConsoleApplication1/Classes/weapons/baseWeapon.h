#pragma once

class BaseWeapon
{
public:
    float* damage;
    
    BaseWeapon(float weaponDamage);

    BaseWeapon(const BaseWeapon& other);
    
    virtual ~BaseWeapon();
};
