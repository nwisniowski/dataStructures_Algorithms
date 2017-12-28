#ifndef DEALER_H
#define DEALER_H

#include "player.h"
#include "deck.h"

class Dealer : public Player
{
public:
    Dealer();

    Card DealCard();
private:
    Deck gameDeck;
};

#endif // DEALER_H
