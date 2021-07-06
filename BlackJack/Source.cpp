#include <iostream>
#include "Card.h"
#include "Player.h"






int main() {

	srand(time(NULL));

	Player player1;

	player1.addCard();
	player1.addCard();

	player1.printAllCards(0);

	Player player2;

	player2.addCard();
	player2.addCard();

	player2.printAllCards(1);
	



	return 0;
}