
#include "Nalog.h"
#include <iostream>

int main()
{
	Property* arr[7];
	arr[0] = new Apartment(5000);
	arr[1] = new Apartment(1000);
	arr[2] = new Apartment(10000);
	arr[3] = new Car(12000);
	arr[4] = new Car(12500);
	arr[5] = new CountryHouse(3500);
	arr[6] = new CountryHouse(3250);
	for (int i = 0; i < 7; i++) {
		std::cout << arr[i]->nalog() << "\n";
		delete arr[i];
	}
}
