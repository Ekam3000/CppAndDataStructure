#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"

int main() {
	Vehicle v;

	Car c;

	v.print();

	c.print();


	Vehicle *v1 = new Vehicle;

	Vehicle *v2;
	// v2 = &v;

	v2 = &c; // v2 pointing to car class object 

	v1 -> print();

	v2 -> print(); // v2 ke through car class ka function print ho gya keyword virtual likhne se base class ke function print() me .. this is run time polymorphism . but agar class car ka print() function hi ni available hoga then base class vehicle ka print() function print ho jaye ga

    // another case -> car me to print() function hai but vehicle class me nii hai print() function tab kya hoga -> error aaye ga .
}

