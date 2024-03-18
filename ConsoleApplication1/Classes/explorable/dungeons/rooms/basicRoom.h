#pragma once
#include <string>

class Player;

class basicRoom
{

    std::string* exploreMessage;
    std::string* clearMessage;
public:
    void (*clearDelegate)(Player*,int&);

    basicRoom(std::string* exploreMessage,std::string* clearMessage);

    basicRoom(const basicRoom& other);

    virtual ~basicRoom();

    //must implement this method
    virtual void exploreRoom(Player* player,int& currentProgression);

    virtual void clearRoom(Player* player,int& currentProgression);
};
