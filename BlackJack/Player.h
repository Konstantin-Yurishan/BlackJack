#pragma once
#include "Card.h"
#include <vector>
#include <iostream>


class Player
{
private:

	std::vector<Card> deck;
	int sum = 0; //хранит общее значение карт
	int cards_number = 0;

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

	void printAllCards() {

		for (int i = 0; i < cards_number; i++) {
			deck.at(i).printCard();
			std::cout << "/************************/" << std::endl;
			std::cout << deck.at(i).getValue() << std::endl;
		}

		std::cout << "Сумма всех карт равна : " << sum << std::endl;
	}


	
	friend class Card;



};

