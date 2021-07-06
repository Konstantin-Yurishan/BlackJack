#pragma once
#include "Player.h"
#include "Croupier.h"
//show your cards and opponent carts


class Table
{
private:

	int allBets;
	Croupier croupier;
	Player player;


public:

	Table() : croupier{ Croupier() }, player{ Player() }{
		croupier.addCard();
		croupier.addCard();

		player.addCard();
		player.addCard();
	};

	void showTable() {
		
		int choice = 0;

		//или если он пасует, т.е. крупье раскрывает карты
		while (player.getSum() < 21) {

			croupier.printStartCards();
			player.printAllCards(1);

			std::cout << std::endl;
			std::cout << "1. Спасовать." << std::endl;
			std::cout << "2. Увеличить ставку." << std::endl;
			std::cout << "3. Сдаться." << std::endl;
			std::cout << "4. Взять ещё карту." << std::endl;
			std::cout << std::endl;
			std::cin >> choice;

			if (choice == 4) {
				player.addCard();
			}

			system("CLS");
		}

		//верхнее поле для карт дилера
		//	у дилера показана только одна карта из двух
		//нижнее поле для карт игрока
		//	ниже показаны сумма очков, сумма денег, и элементы управления


	}





};

