#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "card.h"

class Player {
private:
    std::string name;
    double budjet;
    std::vector<Card> hand;
public:
   Player(std::string name, double budjet);

   std::string getName() const;
   double getBudget() const;
   std::vector<Card> getHand() const;
   void addToBudget(double amount);
   void deductFromBudget(double amount);
   void addToHand(Card card);
   void clearHand();
};

#endif // PLAYER_H