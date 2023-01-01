class Student {
	int age;

	public :

	char *name;

	Student(int age, char *name) {
		this -> age = age;
		// Shallow copy
		// this -> name = name;
	
		// Deep copy

		//upar char *name se initialise kar rakha to ab sirf name likhne ki jarurat hai i.e(name= new char[size])

		this -> name = new char[strlen(name) + 1]; // s1 ke block me char *name ko heap ke memory ka address(heap ki memory ke first block ka address) mil rakha
		strcpy(this -> name, name);
	
	}
	// Copy constructor --> inbulit copy constructor(the one line which only have its definition in main function  and no calling is required in the class (like in OOPS 1 5th folder.) ) uses shallow copy means usme s1 ke block me jo values padi thi  vo copy ho gyi. unn values ka address same hoga dono objects ke block me.
	// agar hame khud ka copy constructor bnana hai to esse kro->
	// Student(Student s)   //here  Student s= s1(main function ka s1) -- copy constructor bna new object s bna ..values copy hui 
	// yaha upar ki line me to ek brackets me copy constructor se values copy ho rahi hai. and yaha iss class me humne kudh ka copy constructor bhi bnaya defined below. so hum jo iss student() ke agrument ke copy constructor call ho raha hai usse avoid kare ge.
	/*student()
	{

	}*/
	//pass by reference ek acha option hai.
	Student(Student const &s) {
		this -> age = s.age;//s.age is of  s1;
		// this -> name = s.name;		// Shallow Copy
		// Deep copy
		this -> name = new char[strlen(s.name) + 1];// s2 ke block me char *name ko heap ke memory ka address(heap ki memory ke first block ka address) mil gya which is different from one given by s1 to s2 initially using shallow copy.
		strcpy(this -> name, s.name);
	}
	void display()
	{
		cout << name << " " << age << endl;
	}
};
