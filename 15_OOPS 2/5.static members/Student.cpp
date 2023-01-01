class Student {
	public :
	static int totalStudents;		// total number of students present
// static means it belongs to a class , har object ke liye seperate copy nii bni hoti, agar object ko isse access karna hai to class ki help se karna hoga

	int rollNumber;
	int age;

	Student() {
		totalStudents++;
	}

	int getRollNumber() {
		return rollNumber;
	}
/* static functions ->
> static functions can only access static data members/functions
 > this pointer nii hota static function me */
	static int getTotalStudent() {
		return totalStudents;
	}
	int gettotalStudent(){
		return totalStudents;
	}
	// or it can also return void and simply print in itseft definition.
/*	void gettotalStudent(){
	 cout<<totalStudents<<endl;
	}*/
};
int Student :: totalStudents = 45;	// initialze static data members..if not initialise it with some value then it is initialized to zero when first object of its class is created no other initialization is permitted.


