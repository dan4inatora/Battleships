#pragma once
#include "Board.h"
#include "Shadowboard.h"
class Player
{
    public:
        Player();
        void setCoords(vector<Coordinates> car ,vector<Coordinates> cru,vector<Coordinates> des,vector<Coordinates> bat,vector<Coordinates> sub);
        int Attack(vector<Coordinates> pos, const Player& other);
        bool canAttack(string type);
        int getHit(vector<Coordinates> pos);
        void print()const;
        Board getBoard();

    private:
        Board board;
        Shadowboard shadowboard;
        vector<string> attackcounter;
};


