#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int main()
{
	CDevice cd;
	CClock cc;
	CWasher cw;
	CCW ccw;

	cd.set_name("LG");
	cd.set_price(10000);
	cd.show_info();
	cout << endl;

	cw.set_efficiency(65);
	cw.set_drying(false);
	cw.show_info();
	cout << endl;

	cc.set_signal(true);
	cc.set_max_time(2);
	cc.show_info();
	cout << endl;

	ccw.set_func_num(125);
	ccw.show_info();
	cout << endl;

	system("pause");
	return 0;
}