#pragma once

class Board
{
private:
	std::string board, moves;
	char zero;
public:
	//Constructors and Destructors
	Board();
	~Board();
	Board(int newBoard);
	Board(std::string newBoard, std::string mvs);
	Board(std::string newBoard);
	//Interaction
	std::string getBoard();
	std::string getBoard() const;
	std::string getMoves();
	std::string getMoves() const;
	//Board Manipulation
	std::string shift(char direction);
	std::string shiftRight();
	std::string shiftLeft();
	std::string shiftUp();
	std::string shiftDown();
	//Operators
	bool operator<(const Board& rhs) const;
};
