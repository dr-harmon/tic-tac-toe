#include "board.h"

#include <iostream>

using namespace std;

char playerToChar(Player p) {
    switch (p) {
        case NONE: return ' ';
        case X: return 'X';
        case O: return 'O';
    }
}

TicTacToeBoard::TicTacToeBoard()
{
    // TODO
}

void TicTacToeBoard::print() const
{
    // TODO
}

bool TicTacToeBoard::isValidMove(int move) const
{
    // TODO
    return false;
}

void TicTacToeBoard::move(Player player, int move)
{
    // TODO
}

bool TicTacToeBoard::isGameOver() const
{
    // TODO
    return false;
}

bool TicTacToeBoard::isTie() const
{
    // TODO
    return false;
}

bool TicTacToeBoard::hasPlayerWon(Player player) const
{
    // TODO
    return false;
}
