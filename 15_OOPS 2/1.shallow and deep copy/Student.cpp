class Student {
	int age;
	char *name;
	public :
	Student(int age , char *name) {
		this -> age = age;
		// Shallow copy -> copying the address of the first element of the array. isme sirf address copy ho rha hai first element ka rather then coping the entire array. 
		                    //this -> name = name;
        //suppose address is    -     780     780
		// s1 ke block me name same array (char array initialise in the miain function) ko point kare ga.
		// Deep copy
		
		this -> name = new char[strlen(name) + 1]; // humne yaha ek new char array banaya , ab ek new addrss(980) mil gya of char[strlen(name) +1] to jo ab hum name me changes kar rahe the vo changes hame new address me dikhe gi.
		                 strcpy(this -> name, name); // 980 ke address me 780 ka address ki values copies ho rahi.
		// so s1 and s2 ke apas apna kudh ka char array hai jinke memory different hai bboth from each other and char array initialise in the miain function.
  
	}
	void display() {
		cout << name << " " << age << endl;
	}
};
