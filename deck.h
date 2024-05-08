#ifndef DECK_H
#define DECK_H

#include <algorithm>
#include <random>
#include <vector>
#include "card.h"

class Deck {
private:
    std::vector<Card> cards;
public:
    Deck();
    void initialize();
    void shuffle();
    Card drawCard();
};

#endif //DECK_H