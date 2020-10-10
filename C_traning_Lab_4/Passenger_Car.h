#pragma once
#include <iostream>
#include "Car.h"

using namespace std;

class Passenger_Car : public Car
{
protected:
	int _number_seats;
public:
	Passenger_Car(string new_model = "Легковой автомобиль", double new_mass = NULL, int new_volume_fuel = NULL, int new_number_seats = 5) :
		Car(new_model, new_mass, new_volume_fuel),
		_number_seats(new_number_seats)
	{}
	int get_number_seats() {
		return _number_seats;
	}
	void set_number_seats(int new_number_seats) {
		_number_seats = new_number_seats;
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
			cout << "\t" << "Количество мест не указана" << endl;
		cout << "\t" << "Количество мест " << _number_seats << endl;
		cout << endl;
	}
};