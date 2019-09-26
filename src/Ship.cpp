#include "Ship.h"

void Ship :: setSize(size_t s){
    this->shipSize = s;
}

int Ship::getSize()const{
    return this->shipSize;
}

vector<Coordinates> Ship::getCoords()const{
    return this->coord;
}

bool Ship::isFloating()const{
    return this->shipSize > 0;
}

bool Ship::isDrown()const{
    return this->shipSize == 0;
}

Ship& Ship::operator = (const Ship& other){
    if(this != &other){
        this->shipSize = other.shipSize;
        vector<Coordinates> tmp = other.coord;
        for(size_t i = 0; i < tmp.size(); i++){
            this->coord.push_back(tmp[i]);
        }
    }
        return * this;

}

void Ship :: getHit(vector<Coordinates> pos){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i++){
        if(!pos[i].isValidCoord()){
            flag = false;
        }
    }
    if(flag){

        for(size_t i = 0; i < this->coord.size(); i++){
            for(size_t j = 0; j < pos.size(); j++){
                if(this->coord[i] == pos[j] && this->coord[i].getDowned() != true){
                    this->coord[i].getDown();
                    this->shipSize--;
                }
            }
        }
        cout<<"It is a hit"<<endl;
        if(isDrown()){
            cout<<"Ship has sunk";
        }
    }
}


