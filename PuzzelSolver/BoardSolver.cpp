#include "stdafx.h"
#include "BoardSolver.h"
#include <queue>
#include <set>
#include <map>
#include <utility>


BoardSolver::BoardSolver()
{
}
BoardSolver::~BoardSolver()
{
}
BoardSolver::BoardSolver(std::string initial)
{
	if(initial.length() < 9) initialState = "0" + initial;
	else initialState = initial;
}

int calcH(Board BOARD)
{
	std::string board = BOARD.getBoard();

	int h = 0;
	for (int i = 0; i<9; i++) {
		if (board[i] != WINSTATE[i]) h++;
	}
	return (h + BOARD.getMoves().length());
}

int calcH2(Board BOARD)
{
	std::string board = BOARD.getBoard();

	int h = 0;
	for (int i = 0; i<9; i++) {
		int a;
		if (board[i] == 0) a = 8;
		else a = board[i] - '1';
		h += abs(a - i) % 3 + abs(a - i) / 3;
	}
	return (h + BOARD.getMoves().length());
}

//Serach Algorithms
std::string BoardSolver::breadthFirst()
{
	std::queue<Board> queuedMoves;
	std::set<std::string> visited;
	Board initialBoard(initialState);

	visited.insert(initialState);
	queuedMoves.push(initialBoard);

	while (!queuedMoves.empty()) {

		if (queuedMoves.front().getBoard() == WINSTATE) return queuedMoves.front().getMoves();
		visited.insert(queuedMoves.front().getBoard());

		for (int i = 0; i < 4; i++) {

			char move = MOVES[i];

			std::string newMove = queuedMoves.front().shift(move);

			if (visited.find(newMove) == visited.end()) {
				Board newBoard(newMove, queuedMoves.front().getMoves() + move);
				queuedMoves.push(newBoard);
			}

		}
		queuedMoves.pop();
	}
	return "Error! Solution not found";
	
}
std::string BoardSolver::aStar() {
	std::multimap<int, Board> map;
	std::set<std::string> visited;
	Board initBord(initialState);
	std::multimap<int, Board>::iterator it;

	visited.insert(initialState);
	map.insert(std::pair<int, Board>(calcH(initialState), initBord));

	while (!map.empty()) {
		it = map.begin();
		Board toErase = (*it).second;

		if ((*it).second.getBoard() == WINSTATE) return (*it).second.getMoves();
		visited.insert((*it).second.getBoard());

		for (int i = 0; i < 4; i++) {
			std::string newMove = (*it).second.shift(MOVES[i]);

			if (visited.find(newMove) == visited.end()) {
				Board newBoard(newMove, (*it).second.getMoves() + MOVES[i]);

				map.insert(std::pair<int, Board>(calcH(newBoard), newBoard));
			}
		}
		for (it = map.begin(); it != map.end(); it++) {
			if ((*it).second.getBoard() == toErase.getBoard()) {
				map.erase(it);
				break;
			}
		}
	}
	return "Error! Solution not found";
}
std::string BoardSolver::aStar2() {
	std::multimap<int, Board> map;
	std::set<std::string> visited;
	Board initBord(initialState);
	std::multimap<int, Board>::iterator it;

	visited.insert(initialState);
	map.insert(std::pair<int, Board>(calcH2(initialState), initBord));

	while (!map.empty()) {
		it = map.begin();
		Board toErase = (*it).second;

		if ((*it).second.getBoard() == WINSTATE) return (*it).second.getMoves();
		visited.insert((*it).second.getBoard());

		for (int i = 0; i < 4; i++) {
			std::string newMove = (*it).second.shift(MOVES[i]);

			if (visited.find(newMove) == visited.end()) {
				Board newBoard(newMove, (*it).second.getMoves() + MOVES[i]);

				map.insert(std::pair<int, Board>(calcH2(newBoard), newBoard));
			}
		}
		for (it = map.begin(); it != map.end(); it++) {
			if ((*it).second.getBoard() == toErase.getBoard()) {
				map.erase(it);
				break;
			}
		}
	}
	return "Error! Solution not found";
}

