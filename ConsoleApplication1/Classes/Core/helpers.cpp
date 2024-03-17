#include "helpers.h"

#include <iostream>

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
    std::cout << "yes or not  \n";
    std::string answer;
    std::cin >> answer;

    return answer=="yes";
}
