#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	while (true)
	{
	again:
		cout << endl;
		cout << "Show data – press 1" << endl;
		cout << "Write data - press 2" << endl;
		cout << "Exit – press 3" << endl;
		cout << endl;
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			string PIB;
			int deposit;
			int price_per_month;
			ifstream infile;
			infile.open("File.txt");
			if (!infile)
			{
				cout << "Cannot open file" << endl;
				return -1;
			}
			cout << setw(15) << "PIB" << setw(15) << "Deposit" << setw(15) << "price" << setw(15) << endl;
			while (!infile.eof())
			{
					infile >> PIB;
				infile >> deposit;
				infile >> price_per_month;
				if (!infile.eof())
				{
					cout.width(15);
					cout << PIB;
					cout.width(15);
					cout << deposit;
					cout.width(15);
					cout << price_per_month;
					cout << endl;
					}
			}
			infile.close();
			goto again;
		}
		if (choice == 2)
		{
			string PIB;
			int deposit;
			int price_per_month;
			cout << "Write PIB ";
			cin >> PIB;
			cout << "Write deposit ";
			cin >> deposit;
			cout << "write Price per mount ";
			cin >> price_per_month;
			fstream outfile("File.txt", ios::app);
			if (!outfile)
			{
				cout << "Cannot open file" << endl;
				return -1;
			}
			outfile.setf(ios::left);
			outfile.width(15);
			outfile << PIB << ' ';
			outfile.width(10);
			outfile << deposit << ' ';
			outfile.width(4);
			outfile << price_per_month << endl;
			outfile.close();
			goto again;
		}
		if (choice == 3)
		{
			break;
		}
	}
	system("pause");
}