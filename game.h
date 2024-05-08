#ifndef GAME_H
#define GAME_H

#include "table.h"

class Game {
private:
    Table table;
    double blindDuration;
    double initialBlindValue;

public:
    Game(const Table& table, double blindDuration, double initialBlindValue);
    void start();
    void preFlop();
};

#endif // GAME_H
