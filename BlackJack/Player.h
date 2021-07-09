#pragma once
#include "Card.h"
#include <vector>
#include <iostream>
#include <Windows.h>


class Player
{
private:

	std::vector<Card> deck;
	int sum = 0; 
	int cards_number = 0;
	int cash = 100;

public:

	Player() = default;

	void addCard();

	Card getCard(int);

	void printAllCards(int);

	int getSum();
	int getCardsNumber();

	friend class Card;

};

