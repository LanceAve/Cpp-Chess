# TODO

### Core Mechanics
- [x] Implement board representation (`Board` class with 8×8 `Square` grid)
- [x] Define piece types and colors (`Piece`, `Color`)
- [x] Add basic piece movement (transfer logic)
- [x] Print board using ASCII/Unicode symbols

### Gameplay Logic
- [ ] Validate legal moves by piece type
- [ ] Implement turn-based system (alternating sides)
- [ ] Handle special rules:
    - [ ] Castling
    - [ ] En passant
    - [ ] Promotion

### Interface
- [ ] CLI input parser for player moves (e.g. `e2 e4`)
- [ ] Game over condition checks (checkmate, stalemate)

### AI (Stretch Goals)
- [ ] Add basic minimax-based opponent
- [ ] Implement alpha-beta pruning for search optimization
- [ ] Consider evaluation heuristics (piece value, control, etc.)

### Future Enhancements
- [ ] Explore graphical UI with OpenGL or SDL2
- [ ] Integrate move history and undo functionality
- [ ] FEN / PGN support for board state notation
