#include <iostream>
using namespace std;
#include "Board.hpp";

// This will follow the rank-file system (rows first, columns second)

int main() {
    Board board;

    std::cout << "Initial Board:\n";
    board.printBoard();

    // testing pawn movement from (6,0) to (4,0)
    std::cout << "\nMoving white pawn from (6,0) to (4,0)...\n";
    board.movePiece(6, 0, 4, 0);  // white pawn up two spaces

    std::cout << "\nBoard After Move:\n";
    board.printBoard();

    return 0;
}