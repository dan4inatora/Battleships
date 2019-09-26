#include "Player.h"

Player::Player()
{
}

bool Player::canAttack(string type){
    bool flag = true;
    for(size_t i = 0; i < this->attackcounter.size(); i++)
    {
        if(this->attackcounter[i].compare(type) == 0)
            flag = false;
    }
    if(flag)
    {
        this->attackcounter.push_back(type);
    }
    if(attackcounter.size() == 5)
        this->attackcounter.clear();
    return flag;
}


int Player::Attack(vector<Coordinates> pos, const Player& other){
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i++)
    {
        if(!pos[i].isValidCoord())
        {
            flag = false;
            return 0;
        }
    }
    if(flag){
        bool flag2 = false;
        for(size_t i = 0; i < other.board.getShips().size(); i++){
            vector<Coordinates> tmp = other.board.getShips()[i]->getCoords();
            vector<Coordinates> hit;
            for(size_t j = 0; j < pos.size(); j++){
                for(size_t k = 0; k < tmp.size(); k++){
                    if(pos[j] == tmp[k]){
                        hit.push_back(pos[j]);
                        other.board.getShips()[i]->getHit(hit);
                        if(other.board.getShips()[i]->isDrown()){
                            cout<<"Sunk Ship";
                            return 1;
                        }
                        flag2 = true;

                    }

                }
            }

        }
        if(flag2 == true){
            for(size_t j = 0; j < pos.size(); j++){
                this->shadowboard.setAtpositions(pos[j].getX(),pos[j].getY(), 'X');
            }
        }
        else{
            for(size_t j = 0; j < pos.size(); j++){
                this->shadowboard.setAtpositions(pos[j].getX(),pos[j].getY(), 'O');
                cout<<"It is a miss"<<endl;
            }
        }
    }
}

void Player::print()const{
    this->board.print();
    this->shadowboard.print();
}

void Player::setCoords(vector<Coordinates> car ,vector<Coordinates> cru,vector<Coordinates> des,vector<Coordinates> bat,vector<Coordinates> sub){
    this->board.setBattleship(bat);
    this->board.setCarrier(car);
    this->board.setCruiser(cru);
    this->board.setDestroyer(des);
    this->board.setSubmarine(sub);
}

Board Player::getBoard(){
    return this->board;
}

int Player :: getHit(vector<Coordinates> pos){//znam che ne e dobra praktika, no poradi moia glupost se iztri 1/2 ot proekta i za dadenoto vreme ne namerih po-dobur nachin za namirane na potunal korab
{
    bool flag = true;
    for(size_t i = 0; i < pos.size(); i++)
    {
        if(!pos[i].isValidCoord())
        {
            flag = false;
            return 0;
        }
    }
    if(flag){
        bool flag2 = false;
        for(size_t i = 0; i < this->board.getShips().size(); i++){
            vector<Coordinates> tmp = this->board.getShips()[i]->getCoords();
            vector<Coordinates> hit;
            for(size_t j = 0; j < pos.size(); j++){
                for(size_t k = 0; k < tmp.size(); k++){
                    if(pos[j] == tmp[k]){
                        hit.push_back(pos[j]);
                        this->board.getShips()[i]->getHit(hit);
                            if(this->board.getShips()[i]->isDrown()){
                            cout<<"Sunk Ship";
                            return 1;
                        }
                        flag2 = true;

                    }

                }
            }

        }
        if(flag2 == true){
            for(size_t j = 0; j < pos.size(); j++){
                this->board.setAtpositions(pos[j].getX(),pos[j].getY(), 'X');

            }
        }
        else{
            for(size_t j = 0; j < pos.size(); j++){
                this->board.setAtpositions(pos[j].getX(),pos[j].getY(), 'O');
                cout<<"It is a miss"<<endl;
            }
        }
    }
}
}
