#pragma once
#include <string>

#include "../../../Core/clearable.h"

class Player;

class basic_room : public clearable
{

public:

    basic_room(std::string* exploreMessage,std::string* clearMessage);

    basic_room(const basic_room& other);

    ~basic_room() override;

    //must implement this method
    void explore(Player* player,int& currentProgression) override;

    void clear(Player* player,int& currentProgression) override;
};
