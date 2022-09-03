class Student {

	public :

	int rollNumber;
	
	private :

	int age;


	public :


	// Default constructor
	
 /* important point ->
 agar parameterised constructor bna diye to main me hum koi essa objects nii bna sakte jo without arguments ho objects ko arguments ke initialise karna pade gaa according to parameterised constructor, agar bina argument ke object bna then u have to define default constructor also (its compulsory) nahi to error dega*/

   // Default constructor
   /*as soon as we created a zero argument constructor the default constructor vanishes*/
	/*Student() {
		cout << "Constreuctor called ! "<< endl;
	}*/
   // Parameterized constructor
/*	Student(int r) {
		cout << "Constructor 2 called !" << endl;
		rollNumber=r;
	}*/
	

	// this pointer
	/*1.this pointer is available for every function defined in the class */
	/*2.this pointer holds the address of the current object which calls the function*/
	// Parameterized constructor
	Student(int rollNumber) {
		cout << "Constructor 2 called !" << endl;
	   
		this -> rollNumber = rollNumber; // readed as -> jo roll number hai use uss object block me daal jo this keyword ne address store kar rakha hai 
	}

	Student(int a, int r) {
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		// yaha this pointer optional hai daalna .
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