#pragma once
#include "Player.h"
//show your cards and opponent carts


class Table
{
private:

	int allBets;
	std::vector<Player> players;


public:

	Table(Player player1, Player player2) {
		players.push_back(player1);
		players.push_back(player2);
	}

	void showTable() {
		
	}



};

