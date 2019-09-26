#pragma once
#include<iostream>
using namespace std;

class Shadowboard
{
    public:
        Shadowboard();
        void setAtpositions(size_t x, size_t y, const char c);
        void print()const;

    protected:

    private:
        char matrix[10][10];
};


