#pragma once
#include "Ship.h"
#include "Carrier.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Submarine.h"
#include "Destroyer.h"

class Board
{
    public:
        Board();
        void Strike(vector<Coordinates> pos);
        void setCarrier(vector<Coordinates> pos);
        void setDestroyer(vector<Coordinates> pos);
        void setSubmarine(vector<Coordinates> pos);
        void setCruiser(vector<Coordinates> pos);
        void setBattleship(vector<Coordinates> pos);
        void setAtpositions(size_t x, size_t y, const char c);
        vector<Coordinates> getOccupied()const;
        vector<Ship*> getShips()const;
        void print()const;
        ~Board();

    private:
        char matrix[10][10];
        vector<Ship*> ships;
        vector<Coordinates> occupied;
};

