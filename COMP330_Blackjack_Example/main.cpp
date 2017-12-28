#include "dealer.h"

int main()
{
    Deck *myDeck = new Deck();
    myDeck->InitializeDeck();
    myDeck->Shuffle();
    myDeck->PrintDeck();

    Card* topCard;
    topCard = myDeck->GetTopCard();
    topCard->PrintCard();

    myDeck->PrintDeck();

    topCard = myDeck->GetTopCard();
    topCard->PrintCard();
}
