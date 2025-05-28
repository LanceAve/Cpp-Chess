#include "Square.hpp"

// return the pointer to the piece currently stored on the square
Piece* Square::getPiece() const {
    return piece;
}

// set this square's piece to p.
Piece* Square::setPiece (Piece* p) {
    piece = p;
    isOccupied = (p != nullptr);
    return piece;
}

// remove current piece from square
Piece* Square::clear() {
    piece = nullptr;
    isOccupied = false;
    return nullptr;
}

// return whether this square is occupied
bool Square::hasPiece() const {
    return isOccupied;
}
