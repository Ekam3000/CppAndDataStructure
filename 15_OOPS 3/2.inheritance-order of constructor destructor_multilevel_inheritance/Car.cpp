class Car : public Vehicle {
	public :
		int numGears;

// by default vehicle class ka default constructor call hoga
		Car() {
			cout << "Car's default constructor " << endl;
		} 
// agar haame parameterized constructor call karwna hai to likhna pade ga alag se
	/*	Car() : Vehicle(8) {
			cout << "Car's default constructor " << endl;
		} */

	/*	Car(int x) : Vehicle(x) {
			cout << "Car's parameterized constructor " << endl;
		} */
		Car(int x, int y) : Vehicle(x) {
			cout << "Car's parameterized constructor " << endl;
			numGears = y;
		}
		~Car() {
			cout << "Car's Destructor " << endl;
		}


		void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
			//		cout << "Max Speed : " << maxSpeed << endl;
		}
};
