class Vehicle {
	public :
		string color;

		
	virtual void print() {
		cout << "Vehicle" << endl;
	}
 /*virtual functions are function which are present in the base class and are overwritten in the derived class .. ex -> the function print() is present in base, derived class*/

};

