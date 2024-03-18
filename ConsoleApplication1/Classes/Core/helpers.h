#pragma once

class Player;

class Helpers
{
public:
    static Player* CreatePlayer();

    static bool PrintChoice();

    static void PrintLoseDeletePlayerRef(Player* player);

    static void PrintWinDeletePlayerRef(Player* player);
};
