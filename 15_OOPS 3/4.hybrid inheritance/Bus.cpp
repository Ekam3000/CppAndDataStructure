class Bus : public Car, public Truck {
	// constructor calling takes place as-
/*	> vehicle()
	>car()
	>vehicle()
	>truck()
	>bus */
	
	public :
		/*Bus()  {
			cout << "Bus's default constructor " << endl;
		}*/
		Bus() : Vehicle(5) {
			cout << "Bus's default  constructor " << endl;
		}
        		~Bus() {
			cout << "Bus's Destructor " << endl;
		}
		/*
		void print() {
			cout << "Bus" << endl;
		}*/
};
   /* hybrid inheritance -
       Vehicle 
	     /\
	  car Truck
	   \    /
	     bus */