#include <iostream>
using namespace std;

class Bus
{
public:
	void print();
	// access x of truck
	// friend function ki definition hum class ke bahar hi define kare ge .
};

void test();
class Truck
{
private:
	int x;
	// 3.
	// friend class Bus;
protected:
	int y;
	// 4.
	// friend class Bus;
public:
	int z;
	// 5.
	friend class Bus;

	/*
	agar koi function ko declare karna ko class ke to esse likhe ge ->
friend void Bus :: print(); // this line is telling us that the class bus should always be defined above the class 'truck' so that compiler ko 'Bus' word ka pehle se pta ho ki haa hai essa word as compiler reads the code from top to bottom. */

	friend void test(); // this line is telling us that the function should always be defined above the class 'truck' so that compiler ko test function ka pehle se pta ho is function baare  as compiler reads the code from top to bottom.

	//	1. friend functions ke pass this pointer ka access nii hota kyuki vo class ke member nii hote. friend function are simple functions. they are not the members function of class
	// 2. friend function ko hum kisi bhi access modifier ke andar daal sakte hai given class me .. indicated by 3,4,5.
	// 3. if a given class/ function is a friend of other class then it can access private members as u know. but vice versa is not true..other class cannot access private members unless it ia declared as friend
};

void Bus ::print()
{
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl;
}
// global function
void test()
{
	// Access truck private
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << " " << t.y << endl;
}
int main()
{
	Bus b;
	b.print();
	test();
}
