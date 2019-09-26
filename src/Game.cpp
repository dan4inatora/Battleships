#include "Game.h"

Game::Game()
{

}

void Game::start(){

    Coordinates p1(0,1);
    Coordinates p2(0,2);
    Coordinates p3(0,3);
    Coordinates p4(0,4);
    Coordinates p5(0,5);
    vector<Coordinates> car;
    car.push_back(p1);
    car.push_back(p2);
    car.push_back(p3);
    car.push_back(p4);
    car.push_back(p5);
   // board.setCarrier(car);


    Coordinates p6(1,6);
    Coordinates p7(1,7);
    Coordinates p8(1,8);
    Coordinates p9(1,9);
    vector<Coordinates> bat;
    bat.push_back(p6);
    bat.push_back(p7);
    bat.push_back(p8);
    bat.push_back(p9);
   // board.setBattleship(bat);


    Coordinates p10(3,9);
    Coordinates p11(4,9);
    Coordinates p12(5,9);
    vector<Coordinates> cru;
    cru.push_back(p10);
    cru.push_back(p11);
    cru.push_back(p12);
   // board.setCruiser(cru);

    Coordinates p13(2,1);
    Coordinates p14(3,1);
    Coordinates p15(4,1);
    Coordinates p116(5,1);
    vector<Coordinates> sub;
    sub.push_back(p13);
    sub.push_back(p14);
    sub.push_back(p15);
    sub.push_back(p116);
    //board.setSubmarine(sub);

    Coordinates p16(5,7);
    Coordinates p17(6,7);
    vector<Coordinates> des;
    des.push_back(p16);
    des.push_back(p17);

    this->bot.setCoords(car,cru,des,bat,sub);

    int x , y;
    cout<<"Carrier: "<<endl;
    cout<<"Enter x : ";
    cin>>y;
    cout<<"Enter y : ";
    cin>>x;
    while(x < 0 || y < 0 || x > 9 || y > 9){
        cout<<"Coords should be between 0 and 9"<<endl;
        cout<<"Enter x : ";
        cin>>y;
        cout<<"Enter y : ";
        cin>>x;
    }
    Coordinates temp(x , y);
    vector<Coordinates> carrier;
    carrier.push_back(temp);
    string orient;
    cout<<"Enter U D L R - up, down, left, right for orientation"<<endl;
    cin>>orient;
    for(int i = 0; i < 5; i++){
        if(orient == "U"){
            Coordinates temp;
            temp.setX(x - i);
            temp.setY(y);
            carrier.push_back(temp);
        }
        else if(orient == "D"){
            Coordinates temp;
            temp.setX(x + i);
            temp.setY(y);
            carrier.push_back(temp);
        }
        else if(orient == "L"){
            Coordinates temp;
            temp.setX(x);
            temp.setY(y - i);
            carrier.push_back(temp);
        }
        else if(orient == "R"){
            Coordinates temp;
            temp.setX(x);
            temp.setY(y + i);
            carrier.push_back(temp);
        }
        else{
            cout<<"Not a direction"<<endl;
        }
    }

    int x1 , y1;
    cout<<"Cruiser :"<<endl;
    cout<<"Enter x : ";
    cin>>y1;
    cout<<"Enter y : ";
    cin>>x1;
    while(x1 < 0 || y1 < 0 || x1 > 9 || y1 > 9){
        cout<<"Coords should be between 0 and 9"<<endl;
        cout<<"Enter x : ";
        cin>>y1;
        cout<<"Enter y : ";
        cin>>x1;
    }
    Coordinates temp1(x1 , y1);
    vector<Coordinates> cruiser;
    cruiser.push_back(temp1);
    string orient1;
    cout<<"Enter U D L R - up, down, left, right for orientation"<<endl;
    cin>>orient1;
    for(int i = 0; i < 3; i++){
        if(orient1 == "U"){
            Coordinates temp;
            temp.setX(x1 - i);
            temp.setY(y1);
            cruiser.push_back(temp);
        }
        else if(orient1 == "D"){
            Coordinates temp;
            temp.setX(x1 + i);
            temp.setY(y1);
            cruiser.push_back(temp);
        }
        else if(orient1 == "L"){
            Coordinates temp;
            temp.setX(x1);
            temp.setY(y1 - i);
            cruiser.push_back(temp);
        }
        else if(orient1 == "R"){
            Coordinates temp;
            temp.setX(x1);
            temp.setY(y1 + i);
            cruiser.push_back(temp);
        }
        else{
            cout<<"Not a direction"<<endl;
        }
    }

    int x2 , y2;
    cout<<"Destroyer: "<<endl;
    cout<<"Enter x : ";
    cin>>y2;
    cout<<"Enter y : ";
    cin>>x2;
    while(x2 < 0 || y2 < 0 || x2 > 9 || y2 > 9){
        cout<<"Coords should be between 0 and 9"<<endl;
        cout<<"Enter x : ";
        cin>>y2;
        cout<<"Enter y : ";
        cin>>x2;
    }
    Coordinates temp2(x2 , y2);
    vector<Coordinates> destroyer;
    destroyer.push_back(temp2);
    string orient2;
    cout<<"Enter U D L R - up, down, left, right for orientation"<<endl;
    cin>>orient2;
    for(int i = 0; i < 2; i++){
        if(orient2 == "U"){
            Coordinates temp;
            temp.setX(x2 - i);
            temp.setY(y2);
            destroyer.push_back(temp);
        }
        else if(orient2 == "D"){
            Coordinates temp;
            temp.setX(x2 + i);
            temp.setY(y2);
            destroyer.push_back(temp);
        }
        else if(orient2 == "L"){
            Coordinates temp;
            temp.setX(x2);
            temp.setY(y2 - i);
            destroyer.push_back(temp);
        }
        else if(orient2 == "R"){
            Coordinates temp;
            temp.setX(x2);
            temp.setY(y2 + i);
            destroyer.push_back(temp);
        }
        else{
            cout<<"Not a direction"<<endl;
        }
    }

    int x3 , y3;
    cout<<"Battle : "<<endl;
    cout<<"Enter x : ";
    cin>>y3;
    cout<<"Enter y : ";
    cin>>x3;
    while(x3 < 0 || y3 < 0 || x3 > 9 || y3 > 9){
        cout<<"Coords should be between 0 and 9"<<endl;
        cout<<"Enter x : ";
        cin>>y3;
        cout<<"Enter y : ";
        cin>>x3;
    }
    Coordinates temp3(x3 , y3);
    vector<Coordinates> battle;
    battle.push_back(temp3);
    string orient3;
    cout<<"Enter U D L R - up, down, left, right for orientation"<<endl;
    cin>>orient3;
    for(int i = 0; i < 4; i++){
        if(orient3 == "U"){
            Coordinates temp;
            temp.setX(x3 - i);
            temp.setY(y3);
            battle.push_back(temp);
        }
        else if(orient3 == "D"){
            Coordinates temp;
            temp.setX(x3 + i);
            temp.setY(y3);
            battle.push_back(temp);
        }
        else if(orient3 == "L"){
            Coordinates temp;
            temp.setX(x3);
            temp.setY(y3 - i);
            battle.push_back(temp);
        }
        else if(orient3 == "R"){
            Coordinates temp;
            temp.setX(x3);
            temp.setY(y3 + i);
            battle.push_back(temp);
        }
        else{
            cout<<"Not a direction"<<endl;
        }
    }

    int x4 , y4;
    cout<<"submarine"<<endl;
    cout<<"Enter x : ";
    cin>>y4;
    cout<<"Enter y : ";
    cin>>x4;
    while(x4 < 0 || y4 < 0 || x4 > 9 || y4 > 9){
        cout<<"Coords should be between 0 and 9"<<endl;
        cout<<"Enter x : ";
        cin>>y4;
        cout<<"Enter y : ";
        cin>>x4;
    }
    Coordinates temp4(x4 , y4);
    vector<Coordinates> submarine;
    submarine.push_back(temp4);
    string orient4;
    cout<<"Enter U D L R - up, down, left, right for orientation"<<endl;
    cin>>orient4;
    for(int i = 0; i < 3; i++){
        if(orient4 == "U"){
            Coordinates temp;
            temp.setX(x4 - i);
            temp.setY(y4);
            submarine.push_back(temp);
        }
        else if(orient4 == "D"){
            Coordinates temp;
            temp.setX(x4 + i);
            temp.setY(y4);
            submarine.push_back(temp);
        }
        else if(orient4 == "L"){
            Coordinates temp;
            temp.setX(x4);
            temp.setY(y4 - i);
            submarine.push_back(temp);
        }
        else if(orient4 == "R"){
            Coordinates temp;
            temp.setX(x4);
            temp.setY(y4 + i);
            submarine.push_back(temp);
        }
        else{
            cout<<"Not a direction"<<endl;
        }
    }
    this->player.setCoords(carrier,cruiser,destroyer,battle,submarine);
    this->player.print();


    int botshipsdown = 0;
    int playershipsdown = 0;
    int turns = 0;
    while(playershipsdown < 5 && botshipsdown < 5){
        if(turns % 2 == 0){
            cout<<"it is players' Turn"<<endl;
            int x , y;
            cout<<"Enter x : ";
            cin>>y;
            cout<<"Enter y : ";
            cin>>x;
            while(x < 0 || y < 0 || x > 9 || y > 9){
                cout<<"Coords should be between 0 and 9"<<endl;
                cout<<"Enter x : ";
                cin>>y;
                cout<<"Enter y : ";
                cin>>x;
            }
            Coordinates hit(x , y);
            vector<Coordinates> attack;
            attack.push_back(hit);
            if(this->player.Attack(attack,this->bot) == 1){
                 botshipsdown++;
            }
            this->player.print();
            turns++;

            attack.clear();
            if (system("CLS")) system("clear");
        }
        else{
            int xb = rand() % 10;
            int yb = rand() % 10;
            Coordinates hitb(xb , yb);
            vector<Coordinates> attackb;
            attackb.push_back(hitb);
           if(this->player.getHit(attackb) == 1){
                playershipsdown++;
           }
            this->player.print();
            turns++;
            attackb.clear();

        }
    }
    //zachita udara po poslednite koordinati, no ne go otchita na duskata

    if(botshipsdown == 5){
        cout<<"YOU WIN";
    }
    if(playershipsdown == 5){
        cout<<"The bot WINS";
    }



}
