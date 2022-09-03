class Student {

	public :
	int rollNumber;
	private :
	int age;
	public :
/* destructor->
 > same name as our class
 >no return value
 >no iinput arguments.
 >only destructor with zero argument is possible
 > dynamically allocated object ke liye destructor kamm karta hai .. it will only deallocate the s3 resouces and destroying the object s3.*/
	~Student() {
		cout << "Destructor called ! " << endl;
	}
	
	
	// Default constructor
	/*Student() {
		cout << "Constreuctor called ! "<< endl;
	}*/

	// Parameterized constructor
	Student(int rollNumber) {
		cout << "Constructor 2 called !" << endl;
	
		this -> rollNumber = rollNumber;
	}

	Student(int a, int r) {
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		this -> age = a;
		this -> rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) {
		if(password != 123) {
			return;
		}
		if(a < 0) {
			return;
		}
		age = a;
	}

};


