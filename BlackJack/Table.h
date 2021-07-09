#pragma once
#include "Player.h"
#include "Croupier.h"

class Table
{
private:

	Croupier croupier;
	Player player;

public:

	Table() : croupier{ Croupier() }, player{ Player() }{
		croupier.addCard();
		croupier.addCard();

		player.addCard();
		player.addCard();

	};

	void game();

};

