#pragma once

class BaseWeapon
{
    float* damage;
public:
    
    BaseWeapon(float weaponDamage);

    BaseWeapon(const BaseWeapon& other);
    
    virtual ~BaseWeapon();

    float getDamage() const {return *damage;}
};
