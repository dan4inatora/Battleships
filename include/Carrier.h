#pragma once
#include "Ship.h"

class Carrier : public Ship
{
    public:
        Carrier();
        string getType()const;
        void setPosition(vector<Coordinates> &other);


    private:
};


