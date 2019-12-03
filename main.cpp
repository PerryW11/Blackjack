/*
============================================================================
Name        : main.cpp
Author      : Perry Winch
Description : main().
============================================================================
*/

#include <iostream>
#include "game.h"

void main()
{
	//Add a Dealer
	addDealer();
	//Add players
	addPlayer();
	addPlayer();
	addPlayer();
	addPlayer();
	//Start game
	start();
	turn();
	checkWin();

	system("pause");
}
