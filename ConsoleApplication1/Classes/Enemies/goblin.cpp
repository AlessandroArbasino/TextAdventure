#include "goblin.h"

goblin::goblin(float* maxLife) : enemyBase(maxLife)
{
}

goblin::goblin(const goblin& other) : enemyBase(other)
{
}

goblin::~goblin()
{
}
