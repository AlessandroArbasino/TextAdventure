
#include <iostream>

#include "Classes/adventure.h"
#include "Classes/Core/helpers.h"
#include "Classes/player.h"
#include "Classes/explorable/dungeons/dungeonCave.h"
#include "Classes/explorable/explorable.h"

int main(int argc, char* argv[])
{
    Player* player= nullptr;

    if(!player)
    {
        player= Helpers::CreatePlayer();
    }

    //delegate for next adventure path
    void (*nextActionDelegate)(Player*) = nullptr;
    
    adventure currentAdventure = adventure();
    int dungeonProgress=0;
    currentAdventure.processAdventure(player,dungeonProgress);
    
    delete player;
    player=nullptr;
    
    return 0;
}
