# Tic-Tac-Toe

[Tic-tac-toe](https://en.wikipedia.org/wiki/Tic-tac-toe) is a simple game for two players. In this project, you are to design an artificially intelligent program that can play the game without losing. The textbook exercise P-7.11, which is restated below, explains how:

> Write a program that can play Tic-Tac-Toe effectively. (See Section 3.1.3.) To do this, you will need to create a game tree T, which is a tree where each node corresponds to a game configuration, which, in this case, is a representation of the tic-tac-toe board. The root node corresponds to the initial configuration. For each internal node v in T, the children of v correspond to the game states we can reach from v's game state in a single legal move for the appropriate player, A (the first player) or B (the second player). Nodes at even depths correspond to moves for A and nodes at odd depths correspond to moves for B. External nodes are either final game states or are at a depth beyond which we don't want to explore. We score each external node with a value that indicates how good this state is for player A. In large games, like chess, we have to use a heuristic scoring function, but for small games, like tic-tac-toe, we can construct the entire game tree and score external nodes as +1, 0, −1, indicating whether player A has a win, draw, or lose in that configuration. A good algorithm for choosing moves is minimax. In this algorithm, we assign a score to each internal node v in T, such that if v represents A's turn, we compute v's score as the maximum of the scores of v's children (which corresponds to A's optimal play from v). If an internal node v represents B's turn, then we compute v's score as the minimum of the scores of v's children (which corresponds to B's optimal play from v).

For more information on applying minimax to tic-tac-toe, see:

* Wikipedia's entry on [minimax](https://en.wikipedia.org/wiki/Minimax)
* Justin Skycak's articles on tic-tac-toe [game trees](https://www.justinmath.com/canonical-and-reduced-game-trees-for-tic-tac-toe/) and [minimax strategy](https://www.justinmath.com/minimax-strategy/)
* Elements of AI's article on [search and games](https://course.elementsofai.com/2/3)

A template has been provided for you. It includes a `TicTacToeBoard` class to simulate the game and a `TicTacToeAI` class to simulate the AI player. It also includes unit tests and an interactive game loop in `main`.

Your task is to fill in the missing parts of the template.

**Hint:** To create a copy of a `TicTacToeBoard` instance, you don't need to add any new functions (as long as you aren't storing pointers in that class). The compiler generates a copy constructor and a copy assignment operator for you.

**Hint:** You can use `numeric_limits<T>::min()` and `numeric_limits<int>::max()` to determine the minimum and maximum allowable values of an integer type `T`. These functions are defined in `<limits>`.

**Hint:** The `minimax` algorithm is recursive, and like most recursive functions, you typically need a "kickoff" function to get the recursion started. In this case, you probably want to implement `getBestMove` so that it hands off the work to some other (recursive) function. Here is an example:

    struct Node {
        int score;
        int move;
    };

    Node minimax(const TicTacToeBoard& board, bool maximize) const
    {
        // TODO
    }

    int TicTacToeAI::getBestMove(const TicTacToeBoard& board) const
    {
        return minimax(board, true).move;
    }
