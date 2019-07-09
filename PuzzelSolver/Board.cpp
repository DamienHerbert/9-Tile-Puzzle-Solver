#include "stdafx.h"
#include "Board.h"

Board::Board()
{
}
Board::~Board()
{
}
Board::Board(int newBoard) 
{
	board = std::to_string(newBoard);
	moves = "";

	if (board.length() < 8) {
		board = "";
		return;
	}
	if (newBoard < 100000000) {
		board.insert(0, "0");
	}
	for (int j = 0; j < 9; j++)
	{
		if (board[j] == '0') {
			zero = j;
			break;
		}
	}
}
Board::Board(std::string newBoard, std::string mvs) {
	moves = mvs;
	board = newBoard;
	for (int i = 0; i < 9; i++) {
		if (newBoard[i] == '0') {
			zero = i;
			break;
		}
	}
}
Board::Board(std::string newBoard) {
	board = newBoard;
	for (int i = 0; i < 9; i++) {
		if (newBoard[i] == '0') zero = i;
	}
}


std::string Board::shift(char direction)
{
	switch (direction)
	{
	case('r'):
		return shiftRight();
	case('l'):
		return shiftLeft();
	case('u'):
		return shiftUp();
	case('d'):
		return shiftDown();
	default:
		return "";
	}
}
std::string Board::shiftRight()
{
	std::string newBoard = board;

	if ((zero + 1) % 3 == 0) return board;
	newBoard[zero] = board[zero + 1];
	newBoard[zero + 1] = '0';
	return newBoard;
}
std::string Board::shiftLeft()
{
	std::string newBoard = board;

	if (zero % 3 == 0) return board;
	newBoard[zero] = board[zero - 1];
	newBoard[zero - 1] = '0';
	return newBoard;
}
std::string Board::shiftUp()
{
	std::string newBoard = board;

	if (zero <= 2) return board;
	newBoard[zero] = board[zero - 3];
	newBoard[zero - 3] = '0';
	return newBoard;
}
std::string Board::shiftDown()
{
	std::string newBoard = board;

	if (zero >= 6) return board;
	newBoard[zero] = board[zero + 3];
	newBoard[zero + 3] = '0';
	return newBoard;
}

std::string Board::getBoard() {	return board; }
std::string Board::getBoard() const { return board; }
std::string Board::getMoves() { return moves; }
std::string Board::getMoves() const { return moves; }

bool Board::operator<(const Board& rhs) const {
	return (moves.length() < rhs.moves.length());
}