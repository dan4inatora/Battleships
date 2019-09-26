#include "Cruiser.h"

Cruiser::Cruiser()
{
    this->setSize(3);
}
string Cruiser::getType()const{
    return "Cruiser";
}

void Cruiser :: setPosition(vector<Coordinates> &other){
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



