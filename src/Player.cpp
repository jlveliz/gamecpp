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
            y = y - 1;

            break;
        case 's':
            y = y + 1;

            break;
        case 'd':
            x = x + 1;

            break;
        case 'a':
            x = x -1;

            break;
    }


}
