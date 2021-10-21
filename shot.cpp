#include"shot.h"
#include<iostream>


void pistol::shot()
{
    std::cout << "BANG !!!" << std::endl;
}

void pulemet::shot()
{
    std::cout << "BANG !!! ";
    std::cout << "BANG !!! ";
    std::cout << "BANG !!! " << std::endl;
}

void player::go_to(GUN* weapon)        
{
    weapon -> shot();
}