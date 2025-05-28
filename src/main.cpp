#include <iostream>
#include "Board.hpp"
#include <windows.h>  // Only on Windows

using namespace std;

// This will follow the rank-file system (rows first, columns second)
int main() {
// set locale to UTF-8 to represent ASCII chess pieces
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);  // Enable UTF-8 output on Windows console
#endif

    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale());

    Board board;

    // Set up white pieces
    board.getSquareAt(7, 0)->setPiece(new Piece{rook, Color::white});
    board.getSquareAt(7, 1)->setPiece(new Piece{knight, Color::white});
    board.getSquareAt(7, 2)->setPiece(new Piece{bishop, Color::white});
    board.getSquareAt(7, 3)->setPiece(new Piece{queen, Color::white});
    board.getSquareAt(7, 4)->setPiece(new Piece{king, Color::white});
    board.getSquareAt(7, 5)->setPiece(new Piece{bishop, Color::white});
    board.getSquareAt(7, 6)->setPiece(new Piece{knight, Color::white});
    board.getSquareAt(7, 7)->setPiece(new Piece{rook, Color::white});
    for (int col = 0; col < 8; ++col) {
        board.getSquareAt(6, col)->setPiece(new Piece{pawn, Color::white});
    }

    // Set up black pieces
    board.getSquareAt(0, 0)->setPiece(new Piece{rook, Color::black});
    board.getSquareAt(0, 1)->setPiece(new Piece{knight, Color::black});
    board.getSquareAt(0, 2)->setPiece(new Piece{bishop, Color::black});
    board.getSquareAt(0, 3)->setPiece(new Piece{queen, Color::black});
    board.getSquareAt(0, 4)->setPiece(new Piece{king, Color::black});
    board.getSquareAt(0, 5)->setPiece(new Piece{bishop, Color::black});
    board.getSquareAt(0, 6)->setPiece(new Piece{knight, Color::black});
    board.getSquareAt(0, 7)->setPiece(new Piece{rook, Color::black});
    for (int col = 0; col < 8; ++col) {
        board.getSquareAt(1, col)->setPiece(new Piece{pawn, Color::black});
    }

    std::cout << "Initial Board:" << std::endl;
    board.printBoard();

    return 0;
}