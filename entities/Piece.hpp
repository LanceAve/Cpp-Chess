#pragma once

// chess piece type definitions
enum PieceType {pawn, knight, bishop, rook, queen, king};

// piece color definitions
enum class Color {black, white};

// chess piece struct definition
struct Piece {
    PieceType type;
    Color color;
};