#pragma once

class Damageble;
class BaseWeapon;

class Attacker
{

    float* basicAttack;
    float* magicAttack;
    int* initiative;
    BaseWeapon* baseWeapon;
    
public:

    Attacker(float* basicAttack,float* magicAttack,BaseWeapon* baseWeapon,int* initiative);

    Attacker(const Attacker& other);

    virtual ~Attacker();

    float getBasicAttack() const {return *basicAttack;}

    float getMagicAttack() const {return *magicAttack;}

    int getInitiative() const {return *initiative;}

    BaseWeapon* getBaseWeapon() const {return baseWeapon;}

    void setWeapon(BaseWeapon* newWeapon);

    virtual void Attack(Damageble* other)=0;

};
