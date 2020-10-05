#pragma once
#include <iostream>

using namespace std;

class Car
{
protected:
	string _model;
	double _mass;
	int _volume_fuel;
public:
	Car(string new_model = "Машина", double new_mass = NULL, int new_volume_fuel = NULL) :
		_model(new_model),
		_mass(new_mass),
		_volume_fuel(new_volume_fuel) {}
	void set_model(string new_model) {
		_model = new_model;
	}
	void set_mass(double new_mass) {
		_mass = new_mass;
	}
	void set_volume_fuel(int new_volume_fuel) {
		_volume_fuel = new_volume_fuel;
	}
	string get_model() {
		return _model;
	}
	double get_mass() {
		return _mass;
	}
	int get_volume_fuel() {
		return _volume_fuel;
	}
	virtual void get_info() {
		cout << "Модель " << _model << endl;
		if (_mass != NULL)
			cout << "\t" << "Масса " << _mass << endl;
		else
			cout << "\t" << "Масса не указана" << endl;
		if (_volume_fuel != NULL)
			cout << "\t" << "Количество топлива " << _volume_fuel << endl;
		else
			cout << "\t" << "Количество топлива не указана" << endl;
		cout << endl;
	}
	~Car()
	{
		cout << "Модель " << _model << " списана" << endl;
	}
};