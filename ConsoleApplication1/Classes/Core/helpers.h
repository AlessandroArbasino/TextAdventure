#pragma once

class enemyBase;
class Player;

class Helpers
{
public:
    static Player* CreatePlayer();

    static bool PrintChoice();

    static void PrintLoseDeletePlayerRef(const Player* player);

    static void PrintWinDeletePlayerRef(const Player* player);

    static void PrintCombact(const Player* player, const enemyBase* enemy);

    static int PrintCombactChoice(const Player* player);
};
