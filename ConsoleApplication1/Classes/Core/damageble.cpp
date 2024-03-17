#include "damageble.h"

Damageble::Damageble(float* Maxlife) :  life(Maxlife)
{
}

Damageble::Damageble(const Damageble& other) : life(new float (other.getLife()))
{
  
}

Damageble::~Damageble()
{
    delete life;
    life=nullptr;
}

void Damageble::takeDamage(float damage)
{
    if(life)
    {
        *life=*life-damage;
        if(*life<=0)
        {
            kill();
        }
    }

}

void Damageble::kill()
{
}
