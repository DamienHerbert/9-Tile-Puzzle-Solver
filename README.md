# 9-Tile-Puzzle-Solver
This is a command line application that receives board configuration via its first argument and returns a sequence of moves that will solve the given puzzle.

> PuzzelSolver.exe “Board configuration” Parameters

Board configuration: the board configuration is given by a sequence of numbers from 0 to 8 were the numbers from 1 to 8 represent the tiles of the board and the 0 represents the blank tile.

The program will attempt to arrange the sequence of numbers given in the following order 123456780. After a solution is found the program will return a string of characters consisting of the letters (u, d, l and r) corresponding to the directions up, down, left and right. These directions are in reference to the movement of the 0.
