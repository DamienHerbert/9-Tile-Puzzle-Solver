#include "Board.h"
#define WINSTATE "123456780"
#define MOVEUP 'u'
#define MOVEDOWN 'd'
#define MOVELEFT 'l'
#define MOVERIGHT 'r'
#define MOVES "udlr"

#pragma once
class BoardSolver
{
private:
	std::string initialState;

public:
	BoardSolver();
	~BoardSolver();
	BoardSolver(std::string initial);
	BoardSolver(int initial);

	//Serach Algorithms
	std::string breadthFirst();
	std::string aStar();
	std::string aStar2();

};

