#include "Nalog.h"

float Property::get_w() {
	return worth;
}
void Property::set_w(float worth1) {
	worth = worth1;
}
float Apartment::nalog() {
	return (get_w() / 1000);
}
float Car::nalog() {
	return (get_w() / 200);
}
float CountryHouse::nalog() {
	return (get_w() / 500);
}