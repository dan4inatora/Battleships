#include "Carrier.h"

Carrier::Carrier()
{
    this->setSize(5);
}

string Carrier::getType()const{
    return "Carrier";
}

void Carrier :: setPosition(vector<Coordinates> &other){
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


