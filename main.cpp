#include "Player.h"
#include "Mapset.h"
#include "GameMap.h"
#include <iostream>

using namespace std;


int main()
{

    Player myPlayer;
    GameMap myMap;

    myMap.drawIntro();
    myMap.draw();

    while(myMap.isGameOver == false) {
        cout << "Introduce el comando de movimiento 'w','s','d','a'" << endl;
        //loop de nuestro juego
        myPlayer.callInput();


        //Seteamos ubicacion de jugador a mapa
        if(myMap.setPlayerCell(myPlayer.x, myPlayer.y)) {
            //Dibujamos mapa
            myMap.draw();

        } else {
            myPlayer.resetToSafePosition();
            myMap.draw();
        }


    }

    return 0;
}
