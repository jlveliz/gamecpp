#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        void callInput();
        void resetToSafePosition();
        char userInput;
        int x;
        int y;
        int lastX , lastY;

    protected:


    private:
};

#endif // PLAYER_H
