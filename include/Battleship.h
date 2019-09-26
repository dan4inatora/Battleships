#pragma once
#include "Ship.h"

class Battleship : public Ship
{
    public:
        Battleship();
        string getType()const;
        void setPosition(vector<Coordinates> &other);


    private:
};


