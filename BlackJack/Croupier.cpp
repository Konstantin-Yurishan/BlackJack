#include "Croupier.h"

void Croupier::addCard() {
	int num = rand() % (53 - 1) + 1;
	Card card;
	card.makeCard(num);
	deck.push_back(card);
	sum += card.getValue();
	cards_number++;
}

Card Croupier::getCard(int index) {
	return deck.at(index);
}


//открывает все карты крупье
void Croupier::printAllCards(int player_num) {

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
}

//первоначальное открытие карт
void Croupier::printStartCards() {

	deck.at(1).printCard(0, 0);
	std::cout << deck.at(1).getValue();

	deck.at(0).printShirtCard();


}

int Croupier::getSum() {
	return sum;
}

int Croupier::getCardsNumber() {
	return cards_number;
}
