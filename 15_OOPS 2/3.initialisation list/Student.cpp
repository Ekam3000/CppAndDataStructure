class Student {
	public :
		int age;
		// const variable aur reference varible ko at the time of initialisation hi value dene hote hai ..

		const int rollNumber;
		//const int rollNumber=10; hum yaha initialise nahi kar sakte kyuki agar main function me 3 objects create hue student ke liye tino ko=i value 10 set ho jaye gi.. we want unique students
		int &x;		// age reference variable
     //                                       argument
    //                                     |    |
	   // initialisation     writing rollNumber(r) is similar to saying - const int rollnumber=r;
		Student(int r,int age) : rollNumber(r), age(age), x(this -> age) {
			//rollNumber = r;
		//	dekho --
		/* int a;
	         a=5;
			 inn dono line ka meaning a me pehle garbage value place hui phir 5 mili ...mili a=5; likhe ka meaning aapa a ko phir se kisi aur value ke saath inililise kar rahe.
			 similarly constructoer me rollNUmber =r likhne ka meaning aapa rollnumber ko phir se kisi aur value ke saath inililise kar rahe. which is not possible bcoz of const keyword and similar is the case with reference variable*/
		}

		
};

