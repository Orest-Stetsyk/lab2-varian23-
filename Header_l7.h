
#pragma once
#include <iostream>

using namespace std;

class CDevice {
private:
	double weight;
	double price;
	char company_name[30];
public:
	CDevice()
	{
		this->weight = 50;
		this->price = 7000;
	}
	CDevice(double Weight, double Price)
	{
		this->weight = Weight;
		this->price = Price;
	}
	CDevice& operator= (const CDevice& drob)
	{
		weight = drob.weight;
		price = drob.price;

		return *this;
	}
	void set_name(const char* name)
	{
		strcpy_s(company_name, name);
	}
	void set_price(double Price)
	{
		this->price = Price;
	}
	void set_weight(double Weight)
	{
		this->weight = Weight;
	}
	virtual void show_info()
	{
		cout << "It's weight is: " << this->weight << " kg" << endl;
		cout << "It's price is: " << this->price << " gryvnas" << endl;
		cout << "It's company name is: " << this->company_name << endl;
	}

	virtual ~CDevice() {};
};

class CWasher : CDevice {
private:
	int efficiency;
	bool drying;
public:
	CWasher()
	{
		this->efficiency = 70;
		std::cout << std::boolalpha;
		this->drying = true;
	}
	CWasher(int Efficiency, bool Drying)
	{
		this->efficiency = Efficiency;
		std::cout << std::boolalpha;
		this->drying = Drying;
	}
	void set_efficiency(int eff)
	{
		this->efficiency = eff;
	}
	void set_drying(bool test)
	{
		this->drying = test;
	}
	CWasher& operator= (const CWasher& drob)
	{
		efficiency = drob.efficiency;
		drying = drob.drying;

		return *this;
	}
	void show_info()
	{
		cout << "Efficiency is: " << this->efficiency << " %" << endl;
		cout << "Drying availability: " << this->drying;
	}

	virtual ~CWasher() {};
};

class CClock : CDevice {
private:
	double max_time;
	bool signal;
public:
	CClock()
	{
		this->signal = false;
		this->max_time = 1;
	}
	CClock(double Max_time, bool Signal)
	{
		this->max_time = Max_time;
		this->signal = Signal;
	}
	CClock& operator= (const CClock& drob)
	{
		signal = drob.signal;
		max_time = drob.max_time;

		return *this;
	}
	void set_max_time(double Max_time)
	{
		this->max_time = Max_time;
	}
	void set_signal(bool Signal)
	{
		this->signal = Signal;
	}
	void show_info()
	{
		cout << "Signal availability : " << this->signal << endl;
		cout << "Maximal time is: " << this->max_time << " hours" << endl;
	}
	virtual ~CClock() {};
};

class CCW : CClock, CWasher {
private:
	int func_number;
public:
	CCW()
	{
		this->func_number = 0;
	};
	CCW(int Func_num)
	{
		this->func_number = Func_num;
	};
	CCW& operator= (const CCW& drob)
	{
		func_number = drob.func_number;

		return *this;
	}
	void set_func_num(int Func_num)
	{
		this->func_number = Func_num;
	}
	void show_info()
	{
		cout << "CCW has " << func_number << " functions" << endl;
	}

	virtual ~CCW() {};
};
