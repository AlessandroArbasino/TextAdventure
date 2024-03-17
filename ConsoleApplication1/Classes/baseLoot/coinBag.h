#pragma once
#include "lootBase.h"

class coinBag : lootBase
{
    int* coins;
public:
    coinBag(int bagCoinAmount);

    coinBag(const coinBag& other);

    virtual ~coinBag();

    int getCoinAmount() const {return *coins;}

    int takecoins();
};
