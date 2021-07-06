#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>

class Card
{
private:

	std::vector<std::string> card;
	int number;
	int value;

public:

	Card() : number{ 0 }, value{ 0 }{
		card.push_back(" _____ ");
		card.push_back("|     |");
		card.push_back("|     |");
		card.push_back("|     |");
		card.push_back("|     |");
		card.push_back("|_____|");
	}

	void makeCard(int number) {

		this->number = number;

		// spades
		if (number >= 1 && number <= 13) {
			card[1] = "|  .  |";
			card[2] = "| /.\\ |";
			card[3] = "|(_._)|";
			card[4] = "|  |  |";
		} // diamonds
		else if (number >= 14 && number <= 26) {
			card[1] = "|  ^  |";
			card[2] = "| / \\ |";
			card[3] = "| \\ / |";
			card[4] = "|  .  |";
		} // hearts
		else if (number >= 27 && number <= 39) {
			card[1] = "| _ _ |";
			card[2] = "|( v )|";
			card[3] = "| \\ / |";
			card[4] = "|  .  |";
		} // clubs
		else if (number >= 40 && number <= 52) {
			card[1] = "|  _  |";
			card[2] = "| ( ) |";
			card[3] = "|(_'_)|";
			card[4] = "|  |  |";
		}

		if (number % 13 < 10) {
			if (number % 13 == 9) {
				card[1].replace(1, 1, "1");
				card[1].replace(2, 1, "0");
				card[5].replace(4, 1, "1");
				card[5].replace(5, 1, "0");
			}
			else {
				card[1].replace(1, 1, std::to_string(number % 13 + 1));
				card[5].replace(5, 1, std::to_string(number % 13 + 1));
			}
			value = number % 13 + 1;
		}

		if (number % 13 == 10) {
			card[1].replace(1, 1, "J");
			card[5].replace(5, 1, "J");
			value = 10;
		}
		else if (number % 13 == 11) {
			card[1].replace(1, 1, "Q");
			card[5].replace(5, 1, "Q");
			value = 10;
		}
		else if (number % 13 == 12) {
			card[1].replace(1, 1, "K");
			card[5].replace(5, 1, "K");
			value = 10;
		}
		else if (number % 13 == 0) {
			card[1].replace(1, 1, "A");
			card[5].replace(5, 1, "A");
			value = 11;
		}
	}

	void printCard(int numberOfCard, int player_num) {
		COORD coord;
		coord.X = numberOfCard * 10;
		coord.Y = 5 +(player_num * 10);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		for (int i = 0; i < 6; i++) {
			std::cout << card[i];
			coord.Y += 1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		}

		

	}

	void printShirtCard() {
		COORD coord;
		coord.X = 10;
		coord.Y = 5;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		for (int i = 0; i < 6; i++) {
			std::cout << ".......";
			coord.Y += 1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		}
	}

	int getValue() {
		return value;
	}




};

