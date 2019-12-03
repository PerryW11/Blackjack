/*
============================================================================
Name        : deck.h
Author      : Perry Winch
Description : Simple deck with shuffler, print, getCard functions.
============================================================================
*/
#pragma once

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

void init_deck();
void shuffler();
void print_deck();
int getCard();
bool is_deck_empty();
