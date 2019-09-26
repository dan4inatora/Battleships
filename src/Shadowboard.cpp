#include "Shadowboard.h"

Shadowboard::Shadowboard()
{
   for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
        {
            this->matrix[i][j] = '.';
        } //ctor
}

void Shadowboard::print()const
{
    cout << "_____________________________________________" << endl;
    cout << "                 Hits                        " << endl;
    cout << "|___________________________________________|" << endl;
    cout << "|    0   1   2   3   4   5   6   7   8   9  |" << endl;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j == 0)
                cout << "| " << i << " ";
            if(i == 9 && j == 0)
            {
                cout << " " << this->matrix[i][j] << "  ";
            }
            else
            {
                cout << " " << this->matrix[i][j] << "  ";
            }
            if(j == 9)
                cout << "|" << endl;
        }
    }
}

void Shadowboard::setAtpositions(size_t x, size_t y, const char c){
    this->matrix[x][y] = c;
}
