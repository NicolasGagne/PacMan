/*
 * board.cpp
 *
 *  Created on: Sep. 27, 2018
 *      Author: ngagne
 */

#include <iostream>


#include "../header/board.h"
#include "../header/position.h"

using namespace std;

Board::Board(){
	width = 10;
	height = 20;
}


int Board::getWidth(){
	return width;
}



void Board::drawBoard(){
	// Call to draw the full board.
	cout << endl;
	for(int y = 0; y < Board::height; y++){
		for(int x = 0; x < Board::width; x++){
			cout << Board::full_Board[y][x].getValue();
		}
		cout << endl;
	}


}
