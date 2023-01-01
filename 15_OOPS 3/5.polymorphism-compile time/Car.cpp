class Car : public Vehicle {
	public :
		int numGears;


		void print() {
			cout << "Car" << endl;
		}
// this function is also present in parent class vehicle ..so example of function overiding
};
