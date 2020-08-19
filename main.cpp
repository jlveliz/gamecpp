#include "Player.h"
#include "Mapset.h"
#include "GameMap.h"
#include <iostream>

using namespace std;


int main()
{
    bool isGameOver = false;
    Player myPlayer;
    GameMap myMap;


    cout << "Inicia Juego";

    while(isGameOver == false) {
        //loop de nuestro juego
        myPlayer.callInput();


        //Seteamos ubicacion de jugador a mapa
        myMap.setPlayerCell(myPlayer.x, myPlayer.y);


        //Dibujamos mapa
        myMap.draw();
    }

    return 0;
}
