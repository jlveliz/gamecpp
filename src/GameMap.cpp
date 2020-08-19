#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    loadMapFromFile();
    isGameOver = false;
}

void GameMap::draw() {
    for(int i = 0; i < 15; i = i + 1) {
        for(int x = 0; x < 10; x = x +1 ) {
            cout << cells[i][x].id;
        }
        cout << endl;
    }
}

bool GameMap::setPlayerCell(int Playerx, int Playery) {

    if(cells[Playery][Playerx].isBlocked() == false)
    {
        //Si gano
        if(cells[Playery][Playerx].id == '$')
        {
            drawVictory();
            isGameOver = true;
            return true;
        }


        if(PlayerCell != NULL) {
            PlayerCell->id = ' ';
        }
        PlayerCell = &cells[Playery][Playerx];
        PlayerCell->id = '3';

        return true;

    } else {
        return false;
    }

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
            //cout << line.length() << endl;

            for(int x = 0; x < line.length() ; x = x + 1 ) {
                if(line[x] == '0') {
                    cells[row][x].id = ' ';
                } else {
                    cells[row][x].id = line[x];
                }
            }
            row++;
        }

        //cout << row << endl;

    } else {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!!" << endl;
    }
}

void GameMap::drawIntro()
{
    string line;
    int row = 0;
    ifstream MyFile("intro.txt");

    if(MyFile.is_open()){

        while(getline(MyFile,line))
        {
            cout << line << endl;
        }

        cin >> line;

    } else {
        cout << "FATAL ERROR: INTRO FILE COULD NOT BE LOADED!!" << endl;
    }

}


void GameMap::drawVictory()
{
     string line;
    int row = 0;
    ifstream MyFile("victory.txt");

    if(MyFile.is_open()){

        while(getline(MyFile,line))
        {
            cout << line << endl;
        }

        cin >> line;

    } else {
        cout << "FATAL ERROR: INTRO FILE COULD NOT BE LOADED!!" << endl;
    }
}
