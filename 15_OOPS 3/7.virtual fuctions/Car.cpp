class Car : public Vehicle {
	public :
		int numGears;

/* ab car class ke liye base class ek abstract class hai -
ab car class ke pass two options hai 
1. implement all the pure virtual functions ( means pure functions ko unki definition provide kar dena khud ki class me)
2. himself become an abstract class. */
		//1.
		void print() {
			cout << "Car" << endl;
		} 
		// yaha definition de di to ye ek normal class hai is class ka object bna sakte // but agar essa hua represented by 2. other than 1. then it will be called an abstract class
		//2.
		/*void print() {
			cout << "Car" << endl;
		}*/ 
};
