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

		//��� ���� �� ������, �.�. ������ ���������� �����
		while (player.getSum() < 21) {

			croupier.printStartCards();
			player.printAllCards(1);

			std::cout << std::endl;
			std::cout << "1. ���������." << std::endl;
			std::cout << "2. ��������� ������." << std::endl;
			std::cout << "3. �������." << std::endl;
			std::cout << "4. ����� ��� �����." << std::endl;
			std::cout << std::endl;
			std::cin >> choice;

			if (choice == 4) {
				player.addCard();
			}

			system("CLS");
		}

		//������� ���� ��� ���� ������
		//	� ������ �������� ������ ���� ����� �� ����
		//������ ���� ��� ���� ������
		//	���� �������� ����� �����, ����� �����, � �������� ����������


	}





};

