class Car : virtual public Vehicle {

	//the keyword virtual having the significance that now only one copy will now available to the bus class(or direct copy of vehicle class is now available to bus class) .. (no two copies will will be available to bus class(one through truck class and one through car class) ). isse impact pade ga sidhe donstructor callings par 
	public :
		int numGears;

		/*Car() {
			cout << "Car's default1 constructor " << endl;
		} */

		Car() : Vehicle(3){
			cout << "Car's default2 constructor " << endl;
		}

		~Car() {
			cout << "Car's Destructor " << endl;
		}


		

		/*void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
			//		cout << "Max Speed : " << maxSpeed << endl;
		}*/



};
