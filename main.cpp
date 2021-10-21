#include"shot.h"
#include<iostream>
#include<conio.h>

int main()
{
    player* p1 = new player;
    player* p2 = new player;
    GUN* wep_one = new pistol;
    GUN* wep_second = new pulemet;

    std::cout << "Player 1 : "; (*p1).go_to(wep_one);
    std::cout << "Player 2 : "; (*p2).go_to(wep_second);


    getch();
}