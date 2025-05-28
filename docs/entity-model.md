# Entity Modelling

## Piece

A `Piece` consists of:
- `PieceType`: one of {pawn, knight, bishop, rook, queen, king}
- `Color`: either `white` or `black`

## Square

A `Square`:
- Holds a pointer to a `Piece`, or is set to `nullptr` if empty
- Provides methods:
  - `hasPiece()`: returns whether a piece is present
  - `getPiece()`, `setPiece()`, `clear()`

## Board

- Represented as an 8×8 2D array of `Square*`
- Indexed with `[rank][file]` (row-major order)
- Corresponds to standard chess notation:
  - `board[0][0]` = `a1`
  - `board[7][7]` = `h8`
- Supports:
  - `movePiece(fromRow, fromCol, toRow, toCol)`
  - `printBoard()` for console visualization

## Glossary

- `PieceType`: enum representing chess piece identity
- `Color`: enum class denoting white or black side
- `Square`: unit of the board grid holding a piece or nothing
- `Board`: game state container with squares and movement logic
