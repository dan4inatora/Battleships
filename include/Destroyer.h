#pragma once
#include "Ship.h"

class Destroyer : public Ship
{
    public:
        Destroyer();
        string getType()const;
        void setPosition(vector<Coordinates> &other);


    private:
};


