#pragma once
#include <string>

class Player;

class basic_room
{

    std::string* exploreMessage;
    std::string* clearMessage;
public:
    void (*clearDelegate)(Player*,int&);

    basic_room(std::string* exploreMessage,std::string* clearMessage);

    basic_room(const basic_room& other);

    virtual ~basic_room();

    //must implement this method
    virtual void exploreRoom(Player* player,int& currentProgression);

    virtual void clearRoom(Player* player,int& currentProgression);
};
