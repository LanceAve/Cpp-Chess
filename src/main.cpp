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
    }

    return 0;
}