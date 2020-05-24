#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class Boat {
private:
	int weight;
	int speed;
public:
	Boat(int Weight, int Speed)
	{
		this->weight = Weight;
		this->speed = Speed;
	};
	Boat()
	{
		this->weight = 1;
		this->speed = 10;
	};
	Boat(const Boat& copy) :
		weight(copy.weight), speed(copy.speed)
	{
		cout << "Copy constructor worked here...";
	}
	Boat& operator= (const Boat& drob)
	{
		weight = drob.weight;
		speed = drob.speed;

		return *this;
	}

	void set_weight(int Weight) {
		this->weight = Weight;
	}
	int get_weight() {
		return this->weight;
	}
	void set_speed(int Speed) {
		this->speed = Speed;
	}
	char get_speed() {
		return this->speed;
	}
	void show_weight() {
		cout << "Weight is: " << this->weight << " kg" << endl;
	}
	void show_speed() {
		cout << "Speed is " << this->speed << " km/h" << endl;
	}
	~Boat()
	{

	};
};

class GuardBoat : public Boat {
private:
	double height;
	double capacity;
public:
	GuardBoat()
	{
		this->height = 100;
		this->capacity = 7;
	};
	GuardBoat(int Height, int Capacity)
	{
		this->height = Height;
		this->capacity = Capacity;
	};
	void set_height(double Height) {
		this->height = Height;
	}
	double get_height()
	{
		return this->height;
	}
	void show_height() {
		cout << "A height of Guard Boat is: " << this->height << " m" << endl;
	}
	void set_capacity(double Capacity) {
		this->capacity = Capacity;
	}
	double get_capacity()
	{
		return this->capacity;
	}
	void show_capacity() {
		cout << "A capacityof Guard Boat is: " << this->capacity << " humans" << endl;
	}
	virtual ~GuardBoat()
	{

	};
};