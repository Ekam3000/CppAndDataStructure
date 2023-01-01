#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"

int main() {
	Vehicle v; // vehicle class constructor called if available // address say 300

	Car c; // pehle vehicle then car  // address say 400

	v.print(); // vehicle print()

	c.print(); // car print() if available otherwise vehicle print()


	Vehicle *v1 = new Vehicle; // dynamically created vehicle object and v1 pointer points to that dynamically created vehicle object //address say 108

	Vehicle *v2; // created a pointer 
	// v2 = &v; // base class pointer to base class object 

	v2 = &c; // base class pointer points to derived class object(how it can points to derived class object ? bcoz derived class object has properties(functions/data members) of base class and base class pointer can access only those properties(function/data members) through derived class) but vice versa is not true(bcoz base class ke pass properties (function/data members) hi nii hai derived class ka)  // will takes address 400

	v1 -> print(); // vehicle print() 

	v2 -> print();
	
    // in these particular cases ,in c++ the function are called according to the pointer to which class it is belonging not on the object. so base class print function will be called.
	
	 // vehicle print() agar vehicle me print() function naaa hua to error de dega . v2 vehicle class ka pointer hai .. jiske pass address class Car ke object ka hai. v2 pointer ke through we can access only those properties which are in the base class (vehicle)     -> this is also a compile time polymorphism 
	

}

/*
Vehicle
Car
Vehicle
Vehicle
*/