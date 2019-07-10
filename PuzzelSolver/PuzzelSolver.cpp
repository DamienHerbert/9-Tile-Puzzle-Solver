﻿// PuzzelSolver.cpp : Defines the entry point for the console application.
//Search algorithms: https://www.javatpoint.com/search-algorithms-in-ai

#include "stdafx.h"
#include "Board.h"
#include "BoardSolver.h"
#include <iostream>

bool checkInput(std::string input);

int main(int argc, char *argv[])
{
	if (argc < 1) {
		std::cout << "Error: Too few arguments." << std::endl;
		return 1;
	}

	std::string input(argv[1]);
	if (!checkInput(input)) {
		std::cout << "Error: Invalid input." << std::endl;
		return 1;
	}

	BoardSolver solve(input);

	if(argc == 1)
	{
		std::cout << "Solution: " << solve.aStar2() << std::endl;
	}
	else {
		if (argv[2] == "astar") {
			std::cout << "Solution: " << solve.aStar() << std::endl;
		}
		else if (argv[2] == "astar2") {
			std::cout << "Solution: " << solve.aStar2() << std::endl;
		}
		else if (argv[2] == "breadthfirst") {
			std::cout << "Solution: " << solve.breadthFirst() << std::endl;
		}
		else {
			std::cout << "Error! " << arg[2] << " is not a recognised search option. Potential valid options include \"astar\", \"astar2\" and \"breadthfirst\" " << std::endl;
		}
	}
	return 0;
}

bool checkInput(std::string input)
{
	if (input.length() != 9) return false;
	char test[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8' };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 9) return false;
			if (test[i] == input[j]) {
				if (i == 8) return true;
				break;
			}
		}
	}
}
