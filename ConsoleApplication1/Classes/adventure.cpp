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
    basicRoom** firstDungeonRooms= new basicRoom*[]{new entryRoom(),new fightRoom(new goblin(new float(10))),new fightRoom(new dragon(new float(100)))};
    explorable* firstDungeon= new dungeonCave(firstDungeonRooms,3);

    basicRoom** secondDungeonRooms= new basicRoom*[]{new entryRoom(),new fightRoom(new goblin(new float(10))),new fightRoom(new dragon(new float(100)))};
    explorable* secondDungeon= new dungeonCave(secondDungeonRooms,3);
    
    
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
    std::cout<< "congratulation player " << currentPlayer <<" you cleared this adventure";
    clearDelegate(currentPlayer);
    delete this;
}
