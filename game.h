/*
============================================================================
Name        : game.h
Author      : Perry Winch
Description : Game control. The controller has actions of addDealer, addPlayer, 
              start game, take turns from player to player and check who wins.
============================================================================
*/
#pragma once

#include "dealer.h"

void addDealer();
void addPlayer();
void start();
void checkWin();
void turn();
