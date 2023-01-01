class Vehicle {
	public :
		string color;

		// Pure virtual fn
	virtual void print() = 0;

// any class which contains an pure virtual function is called abstract class 
// abstract  meaning is incomplete  class .
// hum abstract class ka object nii bna sakte .bcoz jab hum object bnate hai tab all memeber and functions are initialise but yaha to function print() hi incomplete hai
};
/*
• Class having pure virtual function is a abstract class
• Abstract class can have concrete also.
• Object of abstract class cannot be created
• Derived class can must override pure virtual function, otherwise it will also become a abstract 
class.
• Pointer of abstract class can be created
• Pointer of abstract class can hold object of derived class
• Abstract classes are used for achieving polymorphism
*/