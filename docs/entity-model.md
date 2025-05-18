# Entity Modelling

## Piece

A `Piece` consists of:
- `PieceType`: one of {pawn, knight, bishop, rook, queen, king}
- `Color`: either `white` or `black`

## Square

A `Square` is defined as:
- Either containing a `Piece`, or
- Being empty (null)

## Board

- The board is represented as an 8×8 2D array: `board[rank][file]`
- Each element in the array is a `Square`
- The board layout aligns with algebraic notation:
    - `board[0][0]` = `a1`
    - `board[7][7]` = `h8`

## Glossary:

- `PieceType`: enum representing chess piece identity
- `Color`: side (white or black)
- `Square`: data structure holding a Piece or null
- `Board`: 2D grid of Squares, 8×8