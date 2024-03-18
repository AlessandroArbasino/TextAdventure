#include "adventure.h"

#include <iostream>

#include "player.h"
#include "Core/helpers.h"
#include "Enemies/dragon.h"
#include "Enemies/goblin.h"
#include "explorable/explorable.h"
#include "explorable/dungeons/dungeonCave.h"
#include "explorable/dungeons/rooms/entryRoom.h"
#include "explorable/dungeons/rooms/fightRoom.h"

adventure::adventure()
{
    basicRoom** firstDungeonRooms= new basicRoom*[]
    {
        new entryRoom(new std::string("You just entered  the cave"),new std::string("Quite silent room nothing interesting")),
        new fightRoom(new goblin(new float(10)),new std::string("Someone lives here keep your eyes on"),new std::string("Ok i defeated that terrible goblin, lets move on")),
        new fightRoom(new dragon(new float(100)),new std::string("There is something big here... its a dragon"),new std::string("It wasnt so difficult..."))
    };
    
    explorable* firstDungeon= new dungeonCave(
        firstDungeonRooms,
        3,
        new std::string("Oh well my adventure begun and i reach the first cave"),
        new std::string("lets move on"));

    basicRoom** secondDungeonRooms= new basicRoom*[]
    {
        new entryRoom(new std::string("Oh.... another cave hoping for something easier"),new std::string("Another silent room nothing interesting")),
        new fightRoom(new goblin(new float(10)),new std::string("Another goblin maybe"),new std::string("it was definitely another goblin")),
        new fightRoom(new dragon(new float(100)),new std::string("Its a dragon ... again"),new std::string("Im a dragon slayer"))
    };
    explorable* secondDungeon= new dungeonCave(
        secondDungeonRooms,
        3,
        new std::string("Oping for not another cave..."),
        new std::string("And that's it no more caves"));
    
    
    adventureSteps= new explorable*[] {firstDungeon,secondDungeon};
    numSteps=2;
}

adventure::adventure(const adventure& other)
{
}

adventure::~adventure()
{
    for(int i =0;i<numSteps;i++)
    {
        delete adventureSteps[i];
        adventureSteps[i]=nullptr;
    }
    
}

void adventure::processAdventure(Player* currentPlayer,int& dungeonProgressionIndex)
{
    if(!currentPlayer) return;
    
    if(Helpers::PrintChoice())
    {
        if(dungeonProgressionIndex>=numSteps)
        {
            clearAdventure(currentPlayer);
            return;
        }

        //chiedere
        adventureSteps[dungeonProgressionIndex]->clearDelegate= this->processAdventure;
        adventureSteps[dungeonProgressionIndex]->exploreRoom(currentPlayer,dungeonProgressionIndex);
    }
}

void adventure::clearAdventure(Player* currentPlayer)
{
    if(!currentPlayer) return;
    
    std::cout<< "congratulation player " << currentPlayer <<" you cleared this adventure";
    clearDelegate(currentPlayer);
}
