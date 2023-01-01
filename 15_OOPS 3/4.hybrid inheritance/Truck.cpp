class Truck : virtual public Vehicle {

//the keyword virtual having the significance that now only one copy will now available to the bus class(or direct copy of vehicle class is now available to bus class) .. (no two copies will will be available to bus class(one through truck class and one through car class) ). isse impact pade ga sidhe donstructor callings par 
	public :

	/*	Truck() {
			cout << "Truck's default1  constructor " << endl;
		}*/

		Truck() : Vehicle(4) {
			cout << "Truck's default2 constructor " << endl;
		}
		~Truck() {
			cout << "Truck's Destructor " << endl;
		}
	/*	void print(){
            cout<<"Truck"<<endl;
		}*/
};