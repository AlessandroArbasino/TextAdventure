#include "player.h"

#include "weapons/baseWeapon.h"

Player::Player(std::string name, float maxlife, float* baseDamage, float* magicDamage,int* initiative) :
    Damageble(new float (maxlife)) ,
    Attacker(baseDamage,magicDamage,nullptr,initiative), name(new std::string(name))
{
}

Player::Player(const Player& other) : Damageble(other) ,Attacker(other) ,name(new std::string(other.getName()))
{
}

Player::~Player()
{
    delete name;
    name = nullptr;
}

void Player::Attack(Damageble* other)
{
}
