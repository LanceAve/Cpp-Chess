# Devlog: Cpp-Chess

A running log of architectural decisions, implementation milestones, and hair-pulling revelations.

---

## Day 2 – Almost Forgot About This Project - 05/28/2025
- Implemented Board class to hold an 8x8 matrix of Square objects
- Created movePiece() to transfer Piece from one Square to another
- Implemented printBoard() to visualize the board state
- Used Unicode chess symbols (♙♘♗♖♕♔ / lowercase for black) for piece display
- Verified proper piece movement (e.g., white pawn from e2 to e4)

## Console Output:
- Set local to UTF-8 for wide character rendering
  ```bash
  #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
  #endif
  std::locale::global(std::locale(""));
  std::wcout.imbue(std::locale());
  ```

---

## Day 1 – Board Beginnings - 05/18/2025

- Established initial project structure
- Defined `Piece` model with `PieceType` and `Color`
- Created `Square` class to hold pieces or remain empty
- Realized C++ doesn’t do soft hand-holding like Python...
- Started separating headers (`.hpp`) and implementations (`.cpp`)
- Key decision: Treat each `Square` as its own encapsulated unit (hasPiece, get/set logic)

## Toolchain Setup

- Installed MSYS2 with MINGW64 compiler
- Added `g++` to PATH for PowerShell integration
- Verified global compile with:
  ```bash
  g++ -Ientities src/Square.cpp main.cpp -o Cpp-Chess
  ```

## IDE Config Issues

- CLion complained about #include "Square.hpp" not resolving
- Added include_directories(entities) to CMakeLists.txt
- Reloaded CMake, now IntelliSense and compiler both resolve correctly

---

## Notes-to-Self

- C++ class defaults to private, unlike struct
- Don’t use static unless the method doesn’t touch this
- Always match your #include paths with how the compiler is invoked (-I flag)
- explicit constructor saved me from a weird silent bug
- Console exploded with std::runtime_error until Windows UTF-8 output was explicitly set. 
- Reminder: C++ I/O doesn't care about your feelings.

---

## Updated Next Steps
- Implement piece-specific move validation
- Start turn-taking system
- Consider ASCII fallback or GUI design exploration

---

## Quote of the Day
> "It's Jo'ver for you, I have the high ground" - *Unknown*