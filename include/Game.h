#pragma once
#include "Player.h"
#include <stdlib.h>
class Game
{
    public:
        Game();
        void start();

    private:
        Player player;
        Player bot;
};


