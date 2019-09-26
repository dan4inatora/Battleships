#include "Destroyer.h"

Destroyer::Destroyer()
{
    this->setSize(2);
}

string Destroyer::getType()const{
    return "Destroyer";
}

void Destroyer :: setPosition(vector<Coordinates> &other){
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


