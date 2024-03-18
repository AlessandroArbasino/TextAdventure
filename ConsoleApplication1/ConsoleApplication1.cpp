
#include <iostream>

#include "Classes/adventure.h"
#include "Classes/Core/helpers.h"
#include "Classes/player.h"
#include "Classes/Core/PlayerDeathException.h"
#include "Classes/explorable/dungeons/dungeonCave.h"
#include "Classes/explorable/explorable.h"

int main(int argc, char* argv[])
{
    Player* player= nullptr;

    if(!player)
    {
        player= Helpers::CreatePlayer();
    }

    //call this in cunstructor ??
    // mettere tutto nel try ? non il massimo ma come potrei fare?
    adventure* currentAdventure = new adventure();
    
    try
    {
        int dungeonProgress=0;
        currentAdventure->processAdventure(player,dungeonProgress);
    }
    catch (const PlayerDeathException&)
    {
        //current adventure presa come reference dal player death cosi chiama lui il delete ?
        delete currentAdventure;
        currentAdventure=nullptr;
        return 0;
    }

    delete currentAdventure;
    currentAdventure=nullptr;
    
    if(player)
    {
        Helpers::PrintWinDeletePlayerRef(player);
    }

    //just in case of some bug if i cannot win or lose
    delete player;
    player=nullptr;
    
    return 0;
}
