#include "ai.h"

#include <limits>

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
    return minimax(board, true).move;
}
 
TicTacToeAI::Node TicTacToeAI::minimax(const TicTacToeBoard& board, bool maximize) const
{
    if (board.isGameOver()) {
        if (board.hasPlayerWon(aiPlayer)) {
            return {1, 0};
        }
        else if (board.hasPlayerWon(opponent)) {
            return {-1, 0};
        }
        else {
            return {0, 0};
        }
    }

    Node best;
    best.score = maximize ? numeric_limits<int>::min() : numeric_limits<int>::max();

    Player player = maximize ? aiPlayer : opponent;

    for (int move = 1; move <= TicTacToeBoard::SPACES; move++) {
        if (board.isValidMove(move)) {
            TicTacToeBoard newBoard = board;
            newBoard.move(player, move);

            Node node = minimax(newBoard, !maximize);
            if ((maximize && (node.score > best.score)) ||
                (!maximize && (node.score < best.score))) {
                best.score = node.score;
                best.move = move;
            }
        }
    }

    return best;
}
