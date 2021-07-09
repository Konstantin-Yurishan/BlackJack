#include "Player.h"

void Player::addCard() {
	int num = rand() % (53 - 1) + 1;
	Card card;
	card.makeCard(num);
	deck.push_back(card);
	sum += card.getValue();
	cards_number++;
}

Card Player::getCard(int index) {
	return deck.at(index);
}

void Player::printAllCards(int player_num) {

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

int Player::getSum() {
	return sum;
}

int Player::getCardsNumber() {
	return cards_number;
}

