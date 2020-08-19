#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    loadMapFromFile();
}

void GameMap::draw() {
    for(int i = 0; i < 15; i = i + 1) {
        for(int x = 0; x < 10; x = x +1 ) {
            cout << cells[i][x].id;
        }
        cout << endl;
    }
}

void GameMap::setPlayerCell(int Playerx, int Playery) {
    if(PlayerCell != NULL) {
        PlayerCell->id = 0;
    }
    PlayerCell = &cells[Playery][Playerx];
    PlayerCell->id = '3';
}

void GameMap::loadMapFromFile(){

    /*ofstream FileCreated("map.txt");

    if(FileCreated.is_open()) {

    } else {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!!" << endl;
    }*/


    string line;
    int row = 0;
    ifstream MyFile("map.txt");

    if(MyFile.is_open()){

        while(getline(MyFile,line))
        {
            for(int x = 0; x < line.length() ; x = x +1 ) {
                if(line[x] == '0') {
                    cells[row][x].id = 0;
                } else {
                    cells[row][x].id = line[x];
                }
            }
            row++;
        }

    } else {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!!" << endl;
    }
}
