#include "Deck.h"
#include <chrono>
#include <cstdlib>
#include <random>

Deck::Deck() {
  for (int s = HEARTS; s <= SPADES; ++s) {
    for (int r = TWO; r <= ACE; ++r) {
      cards_.emplace_back(static_cast<Suite>(s), static_cast<Rank>(r));
    }
  }
}

Card Deck::drawCard() {
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::mt19937 generator(seed);

  std::uniform_int_distribution<size_t> distribution(0, cards_.size() - 1);
  int ri = distribution(generator);

  Card drawnCard = std::move(cards_[ri]);
  cards_.erase(cards_.begin() + ri);

  return drawnCard;
}
