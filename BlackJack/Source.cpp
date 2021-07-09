#include <iostream>
#include "Table.h"


int main() {

	std::setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	Table table;

	table.game();

	return 0;
}