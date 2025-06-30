#include "Card.h"

Card::Card(Suite suite, Rank rank) : suite_(suite), rank_(rank) {};

Rank Card::getRank() const { return rank_; }

Suite Card::getSuite() const { return suite_; }
