#include "deck.h"

Deck::Deck() {  }

void Deck::initialize() {
    cards.clear();

    for(int seed = 0; seed < 4; seed++ ) {
        for (int value = 0; value ) < 13; ++value) {
            cards.push_back(Card(seed, value));
        }
    }
}

void Deck::shuffle(){
    std::random_device rd;
    std::default_random_engine rng(rd());

    std::shuffle(cards.begin(), cards.end(), rng);
}

Card Deck::drawCard() {
    if (cards.empty()){
        return Card(-1, -1);
    }else{
        Card drawnCard = cards.back();
        cards.pop_back();
        return drawnCard;
    }
}