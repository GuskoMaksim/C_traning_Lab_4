#include <iostream>
#include <Windows.h>
#include "Car.h"
#include "Tractor.h"
#include "Passenger_Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	float cost_fuel = 2.3;
	float total_cost_fuel = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car BMW("BMW 7", 1506, 80);
	Tractor Belaz("Беларус", 3002);
	Passenger_Car Opel("Opel Vectra");
	Truck Maz("Maz MA3");

	Belaz.set_volume_fuel(120);
	Belaz.set_draft_power(5000);
	Opel.set_volume_fuel(60);
	Maz.set_max_load(19000);
	Maz.set_volume_fuel(300);

	BMW.get_info();
	Belaz.get_info();
	Opel.get_info();
	Maz.get_info();

	total_cost_fuel += cost_fuel * (float)BMW.get_volume_fuel();
	total_cost_fuel += cost_fuel * (float)Belaz.get_volume_fuel();
	total_cost_fuel += cost_fuel * (float)Opel.get_volume_fuel();
	total_cost_fuel += cost_fuel * (float)Maz.get_volume_fuel();
	cout << "Общая стоимость топлива " << total_cost_fuel << endl << endl;
}