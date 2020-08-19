#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}


void Player::callInput()
{
    char userInput = ' ';
    cin >> userInput;
    switch(userInput){
        case 'w':
            lastY = y;
            y = y - 1;
            break;
        case 's':
            lastY = y;
            y = y + 1;
            break;
        case 'd':
            lastX = x;
            x = x + 1;
            break;
        case 'a':
            lastX = x;
            x = x -1;
            break;
    }
}

void Player::resetToSafePosition() {

        x = lastX;
        y = lastY;
    }
