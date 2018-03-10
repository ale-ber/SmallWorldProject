#pragma once

/*
Game Piece class

Used solely as an abstract class to be inherited from. All of the 7 possible game pieces in the game
will inherit this class and its public method.
*/

class GamePiece {
public:
	GamePiece();
	~GamePiece();
	int getGamePieces();
protected:
	int numOfGamePieces;
};