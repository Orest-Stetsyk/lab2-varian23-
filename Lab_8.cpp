#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;


int main()
{
	int size;
	cout << "Enter a size of arr:" << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ".";
		cin >> arr[i];
	}




	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	CClass <int> a(arr, size);






	delete[]arr;
	system("pause");
	return 0;
}

