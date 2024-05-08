#include "player.h"

Player::Player(std::string name, double budget) : name(name), budget(budget) {}

std::string Player::getName() const { return player; }

double Player::getBudget() const { return budget; }

std::vector<Card> Player::getHand() const { return hand; }

void Player::addToBudget(double amount) { budget += amount; }

void Player::deductFromBudget(double amount) { budget -= amount; }

void Player::addToHand(Card card) { hand.push_back(card); }

void Player::clearHand() { hand.clear(); }
