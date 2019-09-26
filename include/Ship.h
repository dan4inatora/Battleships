#pragma once
#include <string>
#include "Coordinates.h"

class Ship
{
    public:

        virtual string getType()const = 0;
        virtual void setPosition(vector<Coordinates> &other) = 0;
        vector<Coordinates> getCoords()const;
        virtual void getHit(vector<Coordinates> pos);
        bool isFloating()const;
        bool isDrown()const;
        int getSize()const;
        Ship& operator = (const Ship& other);
        virtual ~Ship(){};


    private:
        size_t shipSize;

    protected:
        vector<Coordinates> coord;
        virtual void setSize(size_t s);
    };


