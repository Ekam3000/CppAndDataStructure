class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

	//1.	
	Vehicle() {
		cout << "Vehicle's default constructor " << endl;
	}
	// agar aapa ne vehicle class(parent class for car class) ke default constructor ko comment out kar diya aur car class  ka object call kiya then error aa jaye ga .. bcoz use pehle car ka default constructor call karna hoga aur vo hoga hi nii . 
	//in that case it is compulsory to call parameterized constructor of vehicle class in the car constructor class

	Vehicle(int z) {
		cout << "Vehicle's Parametrized constructor " << endl;
		maxSpeed = z;
		cout<<"max speed:"<<maxSpeed<<endl;
	}
	~Vehicle() {
		cout << "Vehicle's Destructor " << endl;
	}

};
