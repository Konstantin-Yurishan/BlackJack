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

	void addCard();

	Card getCard(int);

	//��������� ��� ����� ������
	void printAllCards(int);

	//�������������� �������� ����
	void printStartCards();

	int getSum();

	int getCardsNumber();

};

