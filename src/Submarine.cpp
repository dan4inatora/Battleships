#include "Submarine.h"

Submarine::Submarine()
{
    this->setSize(4);
}

string Submarine::getType()const{
    return "Submarine";
}

void Submarine :: setPosition(vector<Coordinates> &other){
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


