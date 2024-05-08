#include "card.h"

Card::Card() { value = -1; seed = -1; }

Card::Card(int seed, int value) : seed(seed), value(value) {};