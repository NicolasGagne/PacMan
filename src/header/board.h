/*
 * board.h
 *
 *  Created on: Sep. 27, 2018
 *      Author: ngagne
 */

#ifndef HEADER_BOARD_H_
#define HEADER_BOARD_H_


class Board{
	private:
		int width;
		int height;
		char wall;
		char ghost;
		char pacman;

	public:
		Board();
		int getWidth();
		char getWall();
		char getGhost();
		char getPacman();

};


#endif /* HEADER_BOARD_H_ */