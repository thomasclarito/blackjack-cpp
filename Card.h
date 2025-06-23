#include <iostream>
#include <string>

#ifndef CARD_H
#define CARD_H

enum Suite { HEARTS, DIAMONDS, CLUBS, SPADES };

enum Rank {
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
  ACE
};

class Card {

public:
  Card(Suite suite, Rank rank);
  Card() = delete;                        // Disable copy constructor
  Card(const Card &) = delete;            // Disable copy constructor
  Card &operator=(const Card &) = delete; // Disable assignment operator
  Card(Card &&) = default;                // Enable move constructor
  Card &operator=(Card &&) = default;     // Enable move assignment operator

private:
  Suite suite_;
  Rank rank_;
};

#endif // CARD_H
