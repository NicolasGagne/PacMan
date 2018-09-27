//============================================================================
// Name        : PacMan.cpp
// Author      : Nicolas Gagne
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "header/board.h"
using namespace std;

int main() {
	cout << "!!!PACMAN!!!" << endl; // prints !!!PACMAN!!!
	Board MyBoard;
	cout << MyBoard.getWidth();
	MyBoard.drawBoard();
	return 0;
}
