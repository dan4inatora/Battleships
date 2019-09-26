#include "Coordinates.h"

Coordinates::Coordinates()
{
    this->x = 0;
    this->y = 0;
    this->isDown = false;
    this->isHit = false;
    this->isOccupied = false;
}

Coordinates::Coordinates(size_t x, size_t y){
    this->x = x;
    this->y = y;

}

Coordinates& Coordinates::operator = (const Coordinates& other){
    if(this != &other){
        this->x = other.x;
        this->y = other.y;
        this->isOccupied = other.isOccupied;
        this->isDown = other.isDown;
    }
    return *this;
}

bool Coordinates::operator == (const Coordinates& other){
    return(this->x == other.x && this->y == other.y);
}

void Coordinates::setX(size_t x){
    this->x = x;
}

void Coordinates::setY(size_t y){
    this->y = y;
}

void Coordinates::getDown(){
    this->isDown = true;
}

void Coordinates::Strike(){
    this->isHit = true;
}

void Coordinates::occupy(){
    this->isOccupied = true;
}

int Coordinates::getX()const{
    return this->x;
}

int Coordinates::getY()const{
    return this->y;
}

bool Coordinates::getDowned()const{
    return this->isDown;
}

bool Coordinates::getStrike()const{
    return this->isHit;
}

bool Coordinates::getOccupied()const{
    return this->isOccupied;
}

void Coordinates::print()const{
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<"Position hit : "<<isHit<<endl;
    cout<<"Position occupide : "<<isOccupied<<endl;
    cout<<"Position downed : "<<isDown<<endl;
}

bool Coordinates::isValidCoord()const{
    return(this->x >= 0 && this->x < 10 && this->y >= 0 && this->y < 10);
}
