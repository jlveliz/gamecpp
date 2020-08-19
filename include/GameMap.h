#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "Mapset.h"

class GameMap
{
    public:
        GameMap();

        Mapset * PlayerCell;
        Mapset cells[15][10];

        void draw();
        // Obtiene las coordenadas de player y actualiza el mapa
        void setPlayerCell(int Playerx, int Playery);

    protected:
        void loadMapFromFile();

    private:
};

#endif // GAMEMAP_H
