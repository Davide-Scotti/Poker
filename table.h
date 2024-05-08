#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include "player.h"

class Table {
    private:
        std::vector<Player> players;
    public:
        Table();
        void addPlayer(const Player& player);
        std::vector<Player> getPlayers() const;
        int getPlayerCount() const;
}

#endif // TABLE_H