#include "Board.h"

Board::Board()
{
    Ship* car = new Carrier();
    Ship* bat = new Battleship();
    Ship* cru = new Cruiser();
    Ship* sub = new Submarine();
    Ship* des = new Destroyer();
    this->ships.push_back(car);
    this->ships.push_back(bat);
    this->ships.push_back(cru);
    this->ships.push_back(sub);
    this->ships.push_back(des);

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
        {
            this->matrix[i][j] = '.';
        }
}

Board::~Board()
{
    for(size_t i = 0; i < this->ships.size(); i++)
    {
        delete this->ships[i];
    }
}

void Board::Strike(vector<Coordinates> pos)
{
  /*  bool flag = true;
    for(size_t i = 0; i < pos.size(); i++)
    {
        if(!pos[i].isValidCoord())
        {
            flag = false;
        }
    }
    if(flag){
        bool flag2 = false;
        for(size_t i = 0; i < this->ships.size(); i++){
            vector<Coordinates> tmp = this->ships[i]->getCoords();
            vector<Coordinates> hit;
            for(size_t j = 0; j < pos.size(); j++){
                for(size_t k = 0; k < tmp.size(); k++){
                    if(pos[j] == tmp[k]){
                        hit.push_back(pos[j]);
                        this->ships[i]->getHit(hit);
                        flag2 = true;
                    }

                }
            }

        }
        if(flag2 == true){
            for(size_t j = 0; j < pos.size(); j++){
                this->matrix[pos[j].getX()][pos[j].getY()] = 'X';
            }
        }
        else{
            for(size_t j = 0; j < pos.size(); j++){
                this->matrix[pos[j].getX()][pos[j].getY()] = 'O';
                cout<<"It is a miss"<<endl;
            }
        }
    }*/
}

void Board::setCarrier(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i ++)
    {
        if(!pos[i].isValidCoord())
            flag = false;
    }
    for(size_t i = 0; i < pos.size(); i++){
        for(size_t j = 0; j < this->occupied.size(); j++){
            if(pos[i] == occupied[j])
                flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < this->ships.size();i++){
            if(this->ships[i]->getType().compare("Carrier") == 0){
                this->ships[i]->setPosition(pos);
            }
        }
        for(size_t i = 0; i < pos.size(); i++){
            this->occupied.push_back(pos[i]);
            this->matrix[pos[i].getX()][pos[i].getY()] = 'C';
        }
    }
    else{
        cout<<"Some of the positions you are trying to put a ship are occupied";
    }
}

void Board::setDestroyer(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i ++)
    {
        if(!pos[i].isValidCoord())
            flag = false;
    }
    for(size_t i = 0; i < pos.size(); i++){
        for(size_t j = 0; j < this->occupied.size(); j++){
            if(pos[i] == occupied[j])
                flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < this->ships.size();i++){
            if(this->ships[i]->getType().compare("Destroyer") == 0){
                this->ships[i]->setPosition(pos);
            }
        }
        for(size_t i = 0; i < pos.size(); i++){
            this->occupied.push_back(pos[i]);
            this->matrix[pos[i].getX()][pos[i].getY()] = 'D';
        }
    }
    else{
        cout<<"Some of the positions you are trying to put a ship are occupied";
    }
}

void Board::setSubmarine(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i ++)
    {
        if(!pos[i].isValidCoord())
            flag = false;
    }
    for(size_t i = 0; i < pos.size(); i++){
        for(size_t j = 0; j < this->occupied.size(); j++){
            if(pos[i] == occupied[j])
                flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < this->ships.size();i++){
            if(this->ships[i]->getType().compare("Submarine") == 0){
                this->ships[i]->setPosition(pos);
            }
        }
        for(size_t i = 0; i < pos.size(); i++){
            this->occupied.push_back(pos[i]);
            this->matrix[pos[i].getX()][pos[i].getY()] = 'S';
        }
    }
    else{
        cout<<"Some of the positions you are trying to put a ship are occupied";
    }
}

void Board::setCruiser(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i ++)
    {
        if(!pos[i].isValidCoord())
            flag = false;
    }
    for(size_t i = 0; i < pos.size(); i++){
        for(size_t j = 0; j < this->occupied.size(); j++){
            if(pos[i] == occupied[j])
                flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < this->ships.size();i++){
            if(this->ships[i]->getType().compare("Cruiser") == 0){
                this->ships[i]->setPosition(pos);
            }
        }
        for(size_t i = 0; i < pos.size(); i++){
            this->occupied.push_back(pos[i]);
            this->matrix[pos[i].getX()][pos[i].getY()] = 'c';
        }
    }
    else{
        cout<<"Some of the positions you are trying to put a ship are occupied";
    }
}

void Board::setBattleship(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i ++)
    {
        if(!pos[i].isValidCoord())
            flag = false;
    }
    for(size_t i = 0; i < pos.size(); i++){
        for(size_t j = 0; j < this->occupied.size(); j++){
            if(pos[i] == occupied[j])
                flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < this->ships.size();i++){
            if(this->ships[i]->getType().compare("Battleship") == 0){
                this->ships[i]->setPosition(pos);
            }
        }
        for(size_t i = 0; i < pos.size(); i++){
            this->occupied.push_back(pos[i]);
            this->matrix[pos[i].getX()][pos[i].getY()] = 'B';
        }
    }
    else{
        cout<<"Some of the positions you are trying to put a ship are occupied";
    }
}

void Board::print()const
{
    cout << "_____________________________________________" << endl;
    cout << "                 Battleships                 " << endl;
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

vector<Ship*> Board::getShips()const{
    return this->ships;
}

void Board::setAtpositions(size_t x, size_t y, const char c){
    this->matrix[x][y] = c;
}

vector<Coordinates> Board::getOccupied()const{
    return this->occupied;
}
