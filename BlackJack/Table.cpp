#include "Table.h"

void Table::game() {

	int choice = 0;

	//��� ���� �� ������, �.�. ������ ���������� �����
	while (player.getSum() < 21 && choice != 3) {

		choice = 0;

		croupier.printStartCards();
		player.printAllCards(1);


		std::cout << std::endl;
		std::cout << "1. �������." << std::endl;
		std::cout << "2. ����� ��� �����." << std::endl;
		std::cout << "3. ���������." << std::endl;
		std::cout << std::endl;
		std::cin >> choice;

		if (choice == 1) {
			system("CLS");
			std::cout << "�� ���������!" << std::endl;
			exit(0);
		}
		else if (choice == 2) {
			if (player.getSum() < 21) {
				player.addCard();
			}
			else {
				std::cout << "���� ��� ������!" << std::endl;
			}
		}
		else if (choice == 3) {
			break;
		}
		system("CLS");
	}

	while (croupier.getSum() <= 21) {
		if (player.getSum() == 21) {
			break;
		}
		if (croupier.getSum() >= 17 || croupier.getSum() > player.getSum()) {
			break;
		}
		croupier.addCard();
	}

	system("CLS");
	croupier.printAllCards(0);
	player.printAllCards(1);

	if (player.getSum() >= croupier.getSum() && player.getSum() <= 21 || player.getSum() < 21 && croupier.getSum() > 21) {
		std::cout << "Player Win!" << std::endl;
	}
	else {
		std::cout << "Casino win!" << std::endl;
	}

}



