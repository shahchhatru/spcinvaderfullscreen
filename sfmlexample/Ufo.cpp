
/*
    Authors:
    076bct021 Chhatra Bikram Shah
    076bct013 Ayush parajuli
    076bct023 Dhiraj Acharya
*/
#include "Ufo.h"

#include"Player.h"
#include"Bullet.h"
#include<SFML/Graphics.hpp>
#include<iostream>
#include<cstdlib>
#include<ctime>
#define window_width 1380
Ufo::Ufo(sf::Texture& texture,int px,int py)
{
    //ctor
        setTexture(texture);
        setColor(sf::Color(255,255,255,240));
        setScale(0.05,0.05);
        posx=px;
        posy=py;
        setPosition(px,py);
        xsize=getxsize();
        ysize=getysize();

        id=noobj;
        noobj++;
}
//static variables declaration;
int Ufo::noobj=0;
int Ufo::xarray[]={0};
int Ufo::yarray[]={0};
int Ufo::score=0;

Ufo::~Ufo()
{
    //dtor

}

Ufo::getxsize(){
     int a;
        a=getTexture()->getSize().x *getScale().x;
       // std::cout<<"x size i.e length"<<a<<std::endl;
        return a;
}

Ufo::getysize(){
        int a;
        a=getTexture()->getSize().y *getScale().y;
        //std::cout<<"y size i.e width"<<a<<std::endl;
        return a;
}

void Ufo::move_down(){
    if(posy>800){
        resetobj();
    }
    posy++;
    setPosition(posx,posy);
}

bool Ufo::detect_collisions(Player& player){
//    Player* player=player;
//std::cout<<"player address"<<player;
     int px,py;
    int ew,eh,pw,ph;//enemy and player width  height ;
    int emx=posx;
    int emy=posy;
    ew=getxsize();
    eh=getysize();
    px=player.Getposx();//x position of player
    //std::cout<<player.Getposx()<<std::endl;
    py=player.Getposy();//y position of player
    pw=player.getxsize();
    ph=player.getysize();
    if(px<=emx && px+pw>=emx){
        if(py>emy && py<emy+eh){
            return false;
        }
    else if(py<=emy && py+ph>=emy){
            return false;
        }else {
            return true;
        }
    }
    if(px>=emx && px<=emx+ew){

        if(py>=emy && py<=emy+eh){
            return false;
        }
       else if(py<=emy && py+ph>=emy){
            return false;
        }
        else {
            return true;
        }
    }
    return true;

}

void Ufo::rand_number(){
    srand(time(NULL));
for(int i=0;i<max_enemy;i++){
    xarray[i]=rand()%(window_width-49);
    yarray[i]=(rand()%2000)*(-1);
}
}

bool Ufo::detect_collisions(Bullet& player){
//    Player* player=player;
//std::cout<<"player address"<<player;
     int px,py;
    int ew,eh,pw,ph;//enemy and player width  height ;
    int emx=posx;
    int emy=posy;
    ew=getxsize();
    eh=getysize();
    px=player.Getposx();//x position of player
    //std::cout<<player.Getposx()<<std::endl;
    py=player.Getposy();//y position of player
    pw=player.Getxsize();
    ph=player.Getysize();
    if(px<=emx && px+pw>=emx){
        if(py>emy && py<emy+eh){
            return false;
        }
    else if(py<=emy && py+ph>=emy){
            return false;
        }else {
            return true;
        }
    }
    if(px>=emx && px<=emx+ew){

        if(py>=emy && py<=emy+eh){
            return false;
        }
       else if(py<=emy && py+ph>=emy){
            return false;
        }
        else {
            return true;
        }
    }
    return true;

}

void Ufo::resetobj(){
    rand_number();
    score++;
    posx=xarray[id];
    posy=yarray[id];
}
