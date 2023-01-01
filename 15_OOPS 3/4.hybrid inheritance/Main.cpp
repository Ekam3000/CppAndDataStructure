#include <iostream>
using namespace std;
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"
#include "Bus.cpp"

int main() {
	Bus b;   // without virtual keyword constructor calling takes place as-
/*	> vehicle()
	>car()
	>vehicle()
	>truck()
	>bus */
     
	/* Bus b; with virtual kwyword the order is like this-
	 Vehicle's default constructor.
	Car's default1 constructor
    truck's default1 constructor
    bus's default constructor 
	
	but agar iss case me mein vehicle ke pass default constructor hi nii hoga then in that case we have to explicitly write vehicle class in bus class ..while in Truck and Car class its your own choice whether to write or not  */
	 
	 //and then after this  by calling Bus b; the output will be like this -
	/*vehicle's parametrized constructor  5 -> 5 representing vehicle is called by bus constructor 
	Car's default2 constructor   // this is when we call car's default consteructor and explicitly calls parametrized constructor of vehicle
    truck's default2 constructor  // this is when we call Truck's default consteructor and explicitly calls parametrized constructor of vehicle
    bus's default constructor 
	*/




	Car c; // virtual keyword likha hai but phir bhi bhi alag se car ka object call karwao ge to Vehicle ka constructor jarur call hoga car ke constructor se pehle

	b.print(); // agar base class me hi print() hoga to koi dikkat ni ane ki.agar nii hoga then specify karna hoga car ke through print function lena yaa truck ke through..  further hame yabhi dekhna phie baad me print() function car aur truck me apna khud ka haa yaa nahi .. agar hai to unka print hoga ..agar nii hai to vehicle ka print() function printy hoga

	b.Car :: print(); // yaa ab car ka print function print hoga ..agar uske pass naa hua then vehicle ka print function print hoga 
	// b.Truck:: print() // yaha ab vehicle ka print function print hoga 

}
 /* hybrid inheritance -
       Vehicle 
	     /\
	  car Truck
	   \    /
	     bus 
		 */


/*
Vehicle's Parametrized constructor 5
max speed:5Car's default2 constructor
Truck's default2 constructor
Bus's default  constructor
Vehicle's Parametrized constructor 3
max speed:3Car's default2 constructor
Vehicle
Vehicle
Car's Destructor
Vehicle's Destructor
Bus's Destructor
Truck's Destructor
Car's Destructor
Vehicle's Destructor
*/
