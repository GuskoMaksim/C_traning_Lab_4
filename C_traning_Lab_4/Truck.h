#include <iostream>
#include "Car.h"

using namespace std;

class Truck : public Car
{
protected:
	int _max_load;
public:
	Truck(string new_model = "�������� ����������", double new_mass = NULL, int new_volume_fuel = NULL, int new_max_load = NULL) :
		Car(new_model, new_mass, new_volume_fuel),
		_max_load(new_max_load)
	{}
	int get_max_load() {
		return _max_load;
	}
	void set_max_load(int new_max_load) {
		_max_load = new_max_load;
	}
	void get_info() {
		cout << "������ " << _model << endl;
		if (_mass != NULL)
			cout << "\t" << "����� " << _mass << endl;
		else
			cout << "\t" << "����� �� �������" << endl;
		if (_volume_fuel != NULL)
			cout << "\t" << "���������� ������� " << _volume_fuel << endl;
		else
			cout << "\t" << "���������� ������� �� �������" << endl;
		if (_max_load != NULL)
			cout << "\t" << "������������ ���� " << _max_load << endl;
		else
			cout << "\t" << "������������ ���� �� �������" << endl;
		cout << endl;
	}
};