/*
 * board.h
 *
 *  Created on: Sep. 27, 2018
 *      Author: ngagne
 */

#ifndef HEADER_BOARD_H_
#define HEADER_BOARD_H_

#include "position.h"

class Board{
	private:
		int width;
		int height;
		Position full_Board[20][10];


	public:
		Board();
		void drawBoard();
		int getWidth();


};


#endif /* HEADER_BOARD_H_ */
