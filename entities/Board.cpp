#include "Board.hpp"
#include <iostream>
#include <locale>
#include <ostream>


// Constructor: allocate 8x8 grid and initialize empty squares
Board::Board() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            grid[row][col] = new Square(nullptr); // start empty
        }
    }
    // testing out pawn placement

    // Add white pawns (row 6)
    for (int col = 0; col < 8; ++col) {
        grid[6][col]->setPiece(new Piece{pawn, Color::white});
    }

    // Add black pawns (row 1)
    for (int col = 0; col < 8; ++col) {
        grid[1][col]->setPiece(new Piece{pawn, Color::black});
    }
}

// Destructor: free allocated memory
Board::~Board() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            delete grid[row][col];
        }
    }
}

// Access square at given row and column
Square* Board::getSquareAt(int row, int col) {
    return grid[row][col];
}

// Move a piece from one square to another
void Board::movePiece(int fromRow, int fromCol, int toRow, int toCol) {
    Square* from = getSquareAt(fromRow, fromCol);
    Square* to = getSquareAt(toRow, toCol);

    Piece* moving = from->getPiece();
    to->setPiece(moving);
    from->clear();  // remove from source
}

// TODO use unicode to make it easier to see
// Print the board for debugging
void Board::printBoard() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if (grid[row][col]->hasPiece()) {
                Piece* p = grid[row][col]->getPiece();

                // alter switch statement to show colors
                switch (p->type) {
                    case pawn: std::cout << (p->color == Color::white ? "P " : "p "); break;
                    case knight: std::cout << (p->color == Color::white ? "N " : "n "); break;
                    case bishop: std::cout << (p->color == Color::white ? "B " : "b "); break;
                    case rook: std::cout << (p->color == Color::white ? "R " : "r "); break;
                    case queen: std::cout << (p->color == Color::white ? "Q " : "q "); break;
                    case king: std::cout << (p->color == Color::white ? "K " : "k "); break;
                    default: std::cout << "? "; break;
                }
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}
