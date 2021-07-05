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
	int cash;

public:

	Player() = default;

	void addCard() {

		int num = rand() % (53 - 1) + 1;

		Card card;

		card.makeCard(num);

		deck.push_back(card);

		sum += card.getValue();
		cards_number++;
	}

	Card getCard(int index) {
		return deck.at(index);
	}

	void printAllCards(int player_num) {

		for (int i = 0; i < cards_number; i++) {
			deck.at(i).printCard(i, player_num);
			std::cout << deck.at(i).getValue() << std::endl;
		}

		std::cout << "Summ : " << sum << std::endl;
	}


	
	friend class Card;



};

