/*
============================================================================
Name        : dealer.h
Author      : Perry Winch
Description : Class - dealer, a Dealer has a hand of cards and PlayerSet he
              aganist to, also has actions of Hit, CheckHand, Distribute cards
			  and getPlayerSet, but Dealer can not choose to Stand in his turn. 
============================================================================
*/
#pragma once
#include "deck.h"
#include "player.h"

class Dealer
{

private:
	vector<int> hand;
	vector<Player *> playerSet;

public:
	void setPlayerSet(vector<Player *> &playerSet);
	vector<Player *> getPlayerSet();
	void Distribute();
	void Hit();
	int CheckHand();
};
