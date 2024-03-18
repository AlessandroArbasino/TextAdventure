#include "helpers.h"

#include <iostream>

#include "PlayerDeathException.h"
#include "../player.h"

Player* Helpers::CreatePlayer()
{
    std::cout << "Welcome new Player tell me your name \n";
    std::string playerName;
    std::cin >> playerName;

    std::cout<< "Ok welcome player "<< playerName;
    return new Player(playerName,100);
}

bool Helpers::PrintChoice()
{
    std::cout << "do you want to continue with your journey?  \n";
    std::cout << "yes or not  \n";
    std::string answer;
    std::cin >> answer;

    return answer=="yes";
}

void Helpers::PrintLoseDeletePlayerRef(Player* player)
{
    std::cout << "Player "<< player->getName()<<" your journey is over \n";
    delete player;
    player=nullptr;

    throw PlayerDeathException() ;
}

void Helpers::PrintWinDeletePlayerRef(Player* player)
{
    std::cout << "Player "<< player->getName()<<" you complete your journey congratulation \n";
    delete player;
    player=nullptr;
}

