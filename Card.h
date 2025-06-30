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
  Card(Card &&) = default;            // Enable move constructor
  Card &operator=(Card &&) = default; // Enable move assignment operator

  Rank getRank() const;
  Suite getSuite() const;

private:
  Suite suite_;
  Rank rank_;
};

#endif // CARD_H
