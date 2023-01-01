#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"
#include "HondaCity.cpp"


int main() {

	
	/*	Vehicle v;

	v.color = "Blue";
	// v.maxSpeed = 100;
	//  v.numTyres = 4;
/*
	Car c;
	
	c.color = "Black";
  //	c.numTyres = 4;
	 c.numGears = 5;
  */
 /*output upto here - vehicle's default constructor
 vehicle's default constructor
 car's default constructor
 car's destructor
 vehicle's destructor
 vehicle's destructor */

 /*	  Car c(5);
	c.color = "Black";
  //	c.numTyres = 4;
	 c.numGears = 5;

	 */

	 // HondaCity h();
	HondaCity h(4, 5);
    Car c;
    c.print();
}

/*
Vehicle's Parametrized constructor --> honda city constructor (whether default or parameterized ),will look firstly for default constructor of Car class, agar nahi hai present, then car class ka parameterized constructor should be present and should be call by Honda city constructor (default or parameterized according to object declared of honda city),similarly now the particular constructor called of car class should look for default or paramerterised constructor of vehicle class (according to the situation whether we have defined (Car(argument may be present or not) : Vehicle(argument present)) this or Car(argument may be present or not) : Vehicle(arguments not present) this ) and that constructor should be present in the Vehicle class. like in our case call "Car(int x, int y) : Vehicle(x)" and in Vehicle class one argument constructor is present.
max speed:4
Car's parameterized constructor
Honda city constructor
Vehicle's default constructor  --becpz of Car c;
Car's default constructor
NumTyres : 1968667795
Color :
Num gears : 6422280
Car's Destructor
Vehicle's Destructor
Honda city destructor
Car's Destructor
Vehicle's Destructor
// order of destructor opposite to order of constructor
*/
