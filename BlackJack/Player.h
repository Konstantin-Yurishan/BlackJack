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

		for (Card a : deck) {
			if (a.getValue() == 11 && sum > 21) {
				sum -= 10;
			}
		}

		std::cout << "Summ : " << sum << std::endl;
		std::cout << "Cash: " << cash;
	}

	int getSum() {
		return sum;
	}

	int getCardsNumber() {
		return cards_number;
	}






	
	friend class Card;



};

