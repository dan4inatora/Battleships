#include "Battleship.h"

Battleship::Battleship()
{
    this->setSize(4);
}

string Battleship::getType()const{
    return "Battleship";
}

void Battleship :: setPosition(vector<Coordinates> &other){
    bool flag = true;
    for(size_t i = 0; i < other.size(); i++){
        if(!other[i].isValidCoord()){
            flag = false;
        }
    }
    if(flag){
        for(size_t i = 0; i < other.size(); i++){
            this->coord.push_back(other[i]);
        }

    }

}


