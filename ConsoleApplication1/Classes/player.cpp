#include "player.h"

Player::Player(std::string name, float maxlife) : name(new std::string(name)) , Damageble(new float (maxlife))
{
}

Player::Player(const Player& other) : name(new std::string(other.getName())) ,Damageble(new float(other.getLife()))
{
}

Player::~Player()
{
    delete name;
    name = nullptr;
}
