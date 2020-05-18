#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
class CTranclator
{
	string name = "newTranslator";

	int speed = 1;



public:
	CTranclator()
	{
		while (true)
		{
			cout << "Work with languages - press 1" << endl;
			cout << "To translate - press 2" << endl;
			cout << "Exit - press 3" << endl;

			int choise;
			cin >> choise;
			system("cls");

			if (choise == 1) {
				int choise2, choise3;


				cout << "Already added languages:" << endl;
				getLanguage();
				cout << "If you want to add more - press 1" << endl;
				cin >> choise3;
				if (choise3 == 1)
				{
					string lang;

					fstream outfile("File.txt", ios::app);


					cout << "Enter a language." << endl;

					cin >> lang;

					outfile.setf(ios::left);

					outfile << lang << endl;

					outfile.close();

					system("cls");
				}
				else(system("cls"));



			}
			if (choise == 2)
			{
				translate();
			}

			if (choise == 3) { break; }
		}

	}
	void translate()
	{
		string language1, language2;
		cout << "Available languages:" << endl;
		getLanguage();
		cout << "Enter first language" << endl;
		cin >> language1;
		cout << "Enter second language" << endl;
		cin >> language2;
		system("cls");
		string word1, word2;
		cout << "Enter a word on " << language1 << endl;
		cin >> word1;
		cout << word1.length() << endl;


		system("cls");
		cout << language1 << setw(30) << language2 << endl;
		cout << endl;
		cout << word1 << setw(28) << "_Word in " << language2 << "_" << endl;
		cout << "Time: " << timeTranslate(word1) << " ms" << endl;
		system("pause");
		system("cls");

	}
	int timeTranslate(string a)
	{

		int time[] = { 0 };
		for (int i = 0; i <= sizeof(a) / sizeof(string); i++) {
			time[0] += speed;
		}

		return time[0];
	}
	void setLanguage()
	{
		string lang;

		fstream outfile("File.txt", ios::app);


		cout << "Enter a language." << endl;

		cin >> lang;

		outfile.setf(ios::left);

		outfile << lang << endl;

		outfile.close();
		system("cls");
	}
	void getLanguage()
	{
		string name;
		ifstream fin("File.txt");
		while (!fin.eof()) {
			getline(fin, name);
			cout << name << endl;
		}
	};
};


int main()
{
	CTranclator translator;


	system("pause");
}
