#include <iostream>
#include <algorithm>
#include <random>
#include "game.h"

Game::Game(const Table& table, double blindDuration, double initialBlindValue) : table(table), blindDuration(blindDuration), initialBlindValue(initialBlindValue) {}

void Game::start() {
    std::cout << "Starting the game!" << std::endl;
    
    // Inizializzo il deck
    Deck deck;
    deck.initialize();
    deck.shuffle();

    // Distribuisco le carte ai player
    for(auto& player : table.getPlayers()) {
        player.clearHand();
        player.addToHand(deck.drawCard());
        player.addToHand(deck.drawCard());
    }

    preFlop();
}

void Game::preFlop(){
    std::cout << "Pre-flop phase" << std::endl;
}
