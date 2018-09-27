/*
 * board.cpp
 *
 *  Created on: Sep. 27, 2018
 *      Author: ngagne
 */




#include "../header/board.h"

Board::Board(){
	width = 10;
	height = 20;
	wall = "#";
	ghost = "K";
	pacman = "O";
}


int Board::getWidth(){
	return width;
}

char Board::getGhost(){
	return ghost;
}

char Board::getWall(){
	return wall;
}

char Board::getPacman(){
	return pacman;
}
