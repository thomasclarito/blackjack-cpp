#include "Card.h"
#include <vector>

#ifndef DECK_H
#define DECK_H

class Deck {
public:
  Deck();
  Deck(const Deck &) = delete;            // Disable copy constructor
  Deck &operator=(const Deck &) = delete; // Disable assignment operator
  Deck(Deck &&) = default;                // Enable move constructor
  Deck &operator=(Deck &&) = default;     // Enable move assignment operator

  void shuffle();
  Card drawCard();
  bool isEmpty() const;

private:
  std::vector<Card> cards_;
};

#endif // DECK_H
