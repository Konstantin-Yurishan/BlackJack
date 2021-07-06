#pragma once
#include <vector>
#include "Card.h"

class Croupier
{
private:

	std::vector<Card> deck;
	int sum = 0;
	int cards_number = 0;

public:

	Croupier() = default;

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


	//открывает все карты крупье
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
	}

	//первоначальное открытие карт
	void printStartCards() {

			deck.at(1).printCard(0, 0);
			std::cout << deck.at(1).getValue();
			
			deck.at(0).printShirtCard();
		

	}



	int getSum() {
		return sum;
	}

	int getCardsNumber() {
		return cards_number;
	}

};

