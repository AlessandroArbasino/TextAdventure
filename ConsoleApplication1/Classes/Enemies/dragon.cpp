#include "dragon.h"

dragon::dragon(float* maxLife) : enemyBase(maxLife)
{
}

dragon::dragon(const dragon& other) : enemyBase(other)
{
}

dragon::~dragon()
{
}
