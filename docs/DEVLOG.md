# Devlog: Cpp-Chess

A running log of architectural decisions, implementation milestones, and hair-pulling revelations.

---

## Day 1 – Board Beginnings - 05/18/2025

- Established initial project structure
- Defined `Piece` model with `PieceType` and `Color`
- Created `Square` class to hold pieces or remain empty
- Realized C++ doesn’t do soft hand-holding like Python...
- Started separating headers (`.hpp`) and implementations (`.cpp`)
- Key decision: Treat each `Square` as its own encapsulated unit (hasPiece, get/set logic)

---

## Toolchain Setup

- Installed MSYS2 with MINGW64 compiler
- Added `g++` to PATH for PowerShell integration
- Verified global compile with:
  ```bash
  g++ -Ientities src/Square.cpp main.cpp -o Cpp-Chess
  ```
---

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

---

## Next Steps
- Implement Board class to hold 8x8 grid of Squares
- Define move logic for pawns (baby steps...)
- Write test harness to simulate board state printing

---

## Quote of the Day
> "If gravity is real, then how come I can't see it?" - *Unknown*