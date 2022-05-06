#pragma once
#ifndef Nalog_H
#define Nalog_H
#include <iostream>

class Property {
	float worth;
public:
	Property(float worth=100) {
		this->worth = worth;
	}
	virtual float nalog() = 0;
	float get_w();
	void set_w(float worth1);
};
class Apartment:public Property {
public:
	float nalog() override;
	Apartment(float worth=50) : Property(worth) {

	}
 };
class Car :public Property
{
public:
	float nalog() override;
	Car(float worth=50):Property(worth){}

};
class CountryHouse :public Property {
public:
	float nalog() override;
	CountryHouse(float worth = 50) :Property(worth) {

	}
};


#endif
