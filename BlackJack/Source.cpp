#include <iostream>
#include "Card.h"
#include "Player.h"






int main() {

	srand(time(NULL));

	Player player;

	player.addCard();
	player.addCard();
	player.addCard();
	player.addCard();

	player.printAllCards();
	



	return 0;
}