#pragma once
#include <iostream>
#include "Table.h"

class Game
{
private:

public:

	Game() {

		int game = 0;

		std::cout << "1. Start game." << std::endl;
		std::cout << "0. Exit." << std::endl;

		std::cin >> game;
		system("CLS");
		if (game == 1) {
			startGame();
		}
		else {
			exit(0);
		}

	}

	void startGame(){
	
		Table table;

		table.showTable();
	
	
	}


};

