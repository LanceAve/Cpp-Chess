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

        // initialize p variable
        piece = p;

        // check if piece is occupied
        if (p != nullptr) {
            isOccupied = true;
        } else {
            isOccupied = false;
        }
    }

    // return this.square's piece pointer
    Piece* getPiece();

    // set this.square's piece pointer
    Piece* setPiece(Piece* p);

    // clear this.square's piece pointer
    Piece* clear();

    // return if the current square contains a piece
    bool hasPiece() const;
};