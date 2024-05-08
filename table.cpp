#include "table.h"

Table::Table() { }

void Table::addPlayer(const Player& player) { players.push_back(player); }

std::vector<Player> Table::getPlayers() const { return players; }

int Table::getPlayerCount() const { return players.size(); }