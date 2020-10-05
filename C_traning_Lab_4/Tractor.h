#pragma once
#include <iostream>
#include "Car.h"

using namespace std;

class Tractor : public Car
{
protected:
	int _draft_power = 5;
public:
	Tractor(string new_model = "Трактор", double new_mass = NULL, int new_volume_fuel = NULL, int new_draft_power = NULL) :
		Car(new_model, new_mass, new_volume_fuel),
		_draft_power(new_draft_power)
	{}
	int get_draft_power() {
		return _draft_power;
	}
	void set_draft_power(int new_draft_power) {
		_draft_power = new_draft_power;
	}
	void get_info() {
		cout << "Модель " << _model << endl;
		if (_mass != NULL)
			cout << "\t" << "Масса " << _mass << endl;
		else
			cout << "\t" << "Масса не указана" << endl;
		if (_volume_fuel != NULL)
			cout << "\t" << "Количество топлива " << _volume_fuel << endl;
		else
			cout << "\t" << "Количество топлива не указана" << endl;
		if (_draft_power != NULL)
			cout << "\t" << "Тягловая мощь " << _draft_power << endl;
		else
			cout << "\t" << "Тягловая мощь не указана" << endl;
		cout << endl;
	}
};