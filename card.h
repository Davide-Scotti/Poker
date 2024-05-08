#ifndef CARD_H
#define CARD_H

class Card {
private:
    int value;
    int seed;
public:
    Card();
    Card(int seed, int value);
}

#endif // CARD_H