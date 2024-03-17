#pragma once

class Player;

class basicRoom
{
public:
    void (*clearDelegate)(Player*,int&);

    basicRoom();

    basicRoom(const basicRoom& other);

    virtual ~basicRoom();

    //must implement this method
    virtual void exploreRoom(Player* player,int& currentProgression)=0;

    virtual void clearRoom(Player* player,int& currentProgression)=0;
};
