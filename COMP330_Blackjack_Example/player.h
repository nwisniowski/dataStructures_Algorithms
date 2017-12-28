#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include <vector>

class Player
{
public:
    Player();

    void Hit();
    void Stand();

    void PrintHand();
    int GetScore();

protected:
    std::vector<Card> hand;
    int score;
};

#endif // PLAYER_H
