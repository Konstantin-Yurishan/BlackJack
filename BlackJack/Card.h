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

	void makeCard(int);
	void printCard(int, int);
	void printShirtCard();
	int getValue();

};

