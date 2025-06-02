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

// Helper function to get Unicode symbol for each piece
std::string getUnicodePiece(Piece* p) {
    if (p == nullptr) return "·";  // Middle dot for empty square

    if (p->color == Color::white) {
        switch (p->type) {
            case king:   return "♔";
            case queen:  return "♕";
            case rook:   return "♖";
            case bishop: return "♗";
            case knight: return "♘";
            case pawn:   return "♙";
        }
    } else {
        switch (p->type) {
            case king:   return "♚";
            case queen:  return "♛";
            case rook:   return "♜";
            case bishop: return "♝";
            case knight: return "♞";
            case pawn:   return "♟";
        }
    }

    return "?";
}

// Print the board for debugging
void Board::printBoard() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Piece* p = grid[row][col]->getPiece();
            std::cout << getUnicodePiece(p) << " ";
        }
        std::cout << std::endl;
    }
}

void Board::setupBoard() {
    // Place white pieces
    Color white = Color::white;
    Color black = Color::black;

    // Row 1 – White major pieces
    grid[7][0]->setPiece(new Piece{rook, white});
    grid[7][1]->setPiece(new Piece{knight, white});
    grid[7][2]->setPiece(new Piece{bishop, white});
    grid[7][3]->setPiece(new Piece{queen, white});
    grid[7][4]->setPiece(new Piece{king, white});
    grid[7][5]->setPiece(new Piece{bishop, white});
    grid[7][6]->setPiece(new Piece{knight, white});
    grid[7][7]->setPiece(new Piece{rook, white});

    // Row 2 – White pawns
    for (int col = 0; col < 8; ++col) {
        grid[6][col]->setPiece(new Piece{pawn, white});
    }

    // Row 7 – Black pawns
    for (int col = 0; col < 8; ++col) {
        grid[1][col]->setPiece(new Piece{pawn, black});
    }

    // Row 8 – Black major pieces
    grid[0][0]->setPiece(new Piece{rook, black});
    grid[0][1]->setPiece(new Piece{knight, black});
    grid[0][2]->setPiece(new Piece{bishop, black});
    grid[0][3]->setPiece(new Piece{queen, black});
    grid[0][4]->setPiece(new Piece{king, black});
    grid[0][5]->setPiece(new Piece{bishop, black});
    grid[0][6]->setPiece(new Piece{knight, black});
    grid[0][7]->setPiece(new Piece{rook, black});
}

}
