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
    board.setupBoard();     // initialize starting positions
    std::wcout << L"Initial Chess Board:\n";
    board.printBoard();     // show current board state

    // Example move: white pawn from e2 to e4
    if (board.isValidMove(6, 4, 4, 4)) {
        board.movePiece(6, 4, 4, 4);
        std::wcout << L"\nBoard After Move (e2 to e4):\n";
        board.printBoard();
    } else {
        std::wcout << L"Invalid move.\n";
    }

    return 0;
}