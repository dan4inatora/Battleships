#include <iostream>
#include <vector>
#pragma once
using namespace std;

class Coordinates
{
    public:
        Coordinates();
        Coordinates(size_t x, size_t y);
        Coordinates& operator = (const Coordinates& other);
        bool operator == (const Coordinates& other);
        void setX(size_t x);
        void setY(size_t y);
        void getDown();
        void Strike();
        void occupy();
        int getX()const;
        int getY()const;
        bool getDowned()const;
        bool getStrike()const;
        bool getOccupied()const;
        void print()const;
        bool isValidCoord()const;

    private:
        size_t x; //horizontal
        size_t y; //vertical
        bool isDown;
        bool isHit;
        bool isOccupied;

};


