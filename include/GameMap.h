#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "Mapset.h"

class GameMap
{
    public:
        GameMap();


        Mapset * PlayerCell;
        Mapset cells[15][10];

        void drawIntro();
        void draw();
        void drawVictory();
        // Obtiene las coordenadas de player y actualiza el mapa
        bool setPlayerCell(int Playerx, int Playery);

        bool isGameOver;

    protected:
        void loadMapFromFile();

    private:
};

#endif // GAMEMAP_H
