#include "coinBag.h"

coinBag::coinBag(int bagCoinAmount) : coins(new int(bagCoinAmount))
{
}

coinBag::coinBag(const coinBag& other) : coins(new int (other.getCoinAmount()))
{
}

coinBag::~coinBag()
{
    delete coins;
    coins= nullptr;
}

int coinBag::takecoins()
{
    if(coins)
    {
        return *coins;
    }
    return 0;
}
