#pragma once
#include <string>
#include <iostream>


class Card
{
private:

	int number = 0;
	std::string card[10][10];
	int value = 0;


public:

	Card() = default;

	void makeCard(int number) {

		this->number = number;

		for (int i = 0; i < 10; i++) {
			for (int c = 0; c < 10; c++) {
				card[i][c] = "'";
			}
		}

		//spade
		if (number >= 1 && number <= 13) {

			card[4][4] = "S";

			if (number >= 1 && number <= 9) {
				card[0][0] = std::to_string(number + 1);
				card[9][9] = std::to_string(number + 1);
				value = number + 1;
			}

			if (number == 10) {
				card[0][0] = "J";
				card[9][9] = "J";
				value = 10;
			}

			if (number == 11) {
				card[0][0] = "Q";
				card[9][9] = "Q";
				value = 10;
			}

			if (number == 12) {
				card[0][0] = "K";
				card[9][9] = "K";
				value = 10;
			}

			if (number == 13) {
				card[0][0] = "A";
				card[9][9] = "A";
				value = 10;
			}
		}

		//heart
		if (number >= 14 && number <= 26) {

			card[4][4] = "H";

			if (number >= 1 && number <= 9) {
				card[0][0] = number + 1;
				card[9][9] = number + 1;
			}

			if (number == 10) {
				card[0][0] = "J";
				card[9][9] = "J";
			}

			if (number == 11) {
				card[0][0] = "Q";
				card[9][9] = "Q";
			}

			if (number == 12) {
				card[0][0] = "K";
				card[9][9] = "K";
			}

			if (number == 13) {
				card[0][0] = "A";
				card[9][9] = "A";
			}
		}

		//club
		if (number >= 27 && number <= 39) {

			card[4][4] = "S";

			if (number >= 1 && number <= 9) {
				card[0][0] = number + 1;
				card[9][9] = number + 1;
			}

			if (number == 10) {
				card[0][0] = "J";
				card[9][9] = "J";
			}

			if (number == 11) {
				card[0][0] = "Q";
				card[9][9] = "Q";
			}

			if (number == 12) {
				card[0][0] = "K";
				card[9][9] = "K";
			}

			if (number == 13) {
				card[0][0] = "A";
				card[9][9] = "A";
			}
		}

		//diamond
		if (number >= 40 && number <= 52) {

			card[4][4] = "S";

			if (number >= 1 && number <= 9) {
				card[0][0] = number + 1;
				card[9][9] = number + 1;
			}

			if (number == 10) {
				card[0][0] = "J";
				card[9][9] = "J";
			}

			if (number == 11) {
				card[0][0] = "Q";
				card[9][9] = "Q";
			}

			if (number == 12) {
				card[0][0] = "K";
				card[9][9] = "K";
			}

			if (number == 13) {
				card[0][0] = "A";
				card[9][9] = "A";
			}
		}
	}

	void printCard() {
		for (int i = 0; i < 10; i++) {
			for (int c = 0; c < 10; c++) {
				std::cout << card[i][c];
			}
			std::cout << std::endl;
		}
	}

	int getValue() {
		return value;
	}




};

