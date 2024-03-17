#pragma once

class Damageble
{
    
    float* life;

public:
    
    Damageble(float* maxLife);

    Damageble(const Damageble& other);

    virtual ~Damageble();

    // corretto ritornare una copia cosi risulta immodificabile ??
    float getLife() const {return *life;}

    void setLife(const float newLife) const {*life = newLife;}

    void takeDamage(float damage);

    virtual void kill();
};
