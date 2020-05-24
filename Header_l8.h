
#pragma once
#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class CClass
{
private:
	T sum = 0;
public:
	CClass(T a[], const int size)
	{
		cout << "\nAverage: " << Average(a, size) << endl;
		cout << "Result: " << Summ(a, size) << endl;
	};

	T Summ(T a[], const int size)
	{

		double avg = Average(a, size);
		for (int i = 0; i < size; i++)
		{
			if (a[i] < avg)
			{
				sum += abs(a[i]);
			}

		}
		return sum;
	}

	double Average(T a[], const int size2)
	{
		double asum = 0;
		double r_avg;
		for (int i = 0; i < size2; i++)
		{
			asum += a[i];

		}
		return asum / size2;
	}





	~CClass() {};

};

