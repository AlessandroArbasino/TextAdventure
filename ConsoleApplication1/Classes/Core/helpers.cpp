#include "helpers.h"

#include <iostream>

#include "PlayerDeathException.h"
#include "../player.h"
#include "../Enemies/enemyBase.h"
#include "../weapons/baseWeapon.h"

Player* Helpers::CreatePlayer()
{
    std::cout << "Welcome new Player tell me your name \n";
    std::string playerName;
    std::cin >> playerName;

    std::cout<< "Ok welcome player "<< playerName << " \n";
    //chiedere sulla creazione in heap meglio farlo direttamente in dichiarazione on in costruttore della foglia 
    return new Player(playerName,100,new float(100),new float(100),new int(100));
}

bool Helpers::PrintChoice()
{
    std::cout << "do you want to continue with your journey?  \n";
    std::cout << "yes or not  \n";
    std::string answer;
    std::cin >> answer;

    return answer=="yes";
}

void Helpers::PrintLoseDeletePlayerRef(const Player* player)
{
    std::cout << "Player "<< player->getName()<<" your journey is over \n";
    delete player;
    player=nullptr;

    throw PlayerDeathException() ;
}

void Helpers::PrintWinDeletePlayerRef(const Player* player)
{
    std::cout << "Player "<< player->getName()<<" you complete your journey congratulation \n";
    delete player;
    player=nullptr;
}

void Helpers::PrintCombact(const Player* player, const enemyBase* enemy)
{
    std::cout << "Player "<< player->getName()<<" is fighting against a monster\n";
    std::cout << player->getName() << "your stats are :\n";
    std::cout << "Base Power with of " << player->getBasicAttack()<<"\n";
    std::cout << "Magic Power with of " << player->getMagicAttack()<<"\n";
    std::cout << "Life " << player->getLife()<<"\n";

    if(player->getBaseWeapon()!=nullptr)
    {
        std::cout << "you have also a ... " << player->getBaseWeapon() << " with a power of "<< player->getBaseWeapon()->getDamage();
    }
    else
    {
        std::cout << "unfortunately you do not have any weapon \n";
    }

    std::cout << "you opponent is a ... with stats of \n "<< "with "<<enemy->getLife()<<"life";
    std::cout << "Base Power with of " << enemy->getBasicAttack()<<"\n";
    std::cout << "Magic Power with of " << enemy->getMagicAttack()<<"\n";
    
}

int Helpers::PrintCombactChoice(const Player* player)
{
    std::cout << "Press 1 to do a normal attack \n";
    std::cout << "Press 2 to do a magic attack \n";

    if(player->getBaseWeapon()!=nullptr)
    {
        std::cout << "Press 3 to use your weapon \n";
    }

    std::string chosenAttackType;
    std::cin >> chosenAttackType;

    //chiedere parsa input in un int
    return std::stoi(chosenAttackType);
}

