#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	Boat victory;
	GuardBoat police;

	victory.set_weight(30);
	victory.show_weight();
	victory.set_speed(15);
	victory.show_speed();

	police.set_height(12);
	police.show_height();
	police.set_weight(50);
	police.show_weight();

	system("pause");
	return 0;
}

