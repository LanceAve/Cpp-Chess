#pragma once
#include "Piece.hpp"

// square class definition
class Square {

    // variable definitions for the Square class
    bool isOccupied;    // checks if the square is currently occupied
    Piece* piece;       // pointer to piece location in memory

public:
    // square constructor that accepts piece as a parameter
    explicit Square(Piece* p) {
        piece = p;      // initialize p variable

        // check if piece is occupied
        if (p != nullptr) {
            isOccupied = true;
        } else {
            isOccupied = false;
        }
    }

    Piece* getPiece() const;    // return this.square's piece pointer
    Piece* setPiece(Piece* p);  // set this.square's piece pointer
    Piece* clear();             // clear this.square's piece pointer
    bool hasPiece() const;      // return if the current square contains a piece
};