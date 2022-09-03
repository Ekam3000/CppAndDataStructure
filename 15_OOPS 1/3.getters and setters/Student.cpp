class Student {

	public :

	int rollNumber;
	
	private :

	int age;


	public :

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}
// ye dekho humne kese ek private member ka faida uthaya ..
// dekho hum phir access kar paa rahe hai private member with the help of objects calling functions ... but phir bhi humne restriction lga rakhe hai password aur  -ve number se .. only those can access who will give the correct password and not a -ve number.
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
