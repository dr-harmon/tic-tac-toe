#include "ai.h"

using namespace std;

TicTacToeAI::TicTacToeAI(Player aiPlayer, Player opponent)
{
    if (aiPlayer == NONE || opponent == NONE) {
        throw TicTacToeBoard::InvalidPlayer();
    }

    this->aiPlayer = aiPlayer;
    this->opponent = opponent;
}

int TicTacToeAI::getBestMove(const TicTacToeBoard& board) const
{
    // TODO
    return 0;
}
