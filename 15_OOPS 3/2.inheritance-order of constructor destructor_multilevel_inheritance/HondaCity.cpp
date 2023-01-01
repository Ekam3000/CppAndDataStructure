class HondaCity : public Car {
	public :
    
 /*	 HondaCity(){
		cout<<"Honda City constructor"<<endl;
	 }*/

  	 // agar aapa ne car  class(parent class for honda city class) ke default constructor ko comment out kar diya aur hondacity  class  ka object call kiya then error aa jaye ga .. bcoz use pehle car ka default constructor call karna hoga aur vo hoga hi nii . 
	 //in that case it is compulsary to call prameterized constructor of vehicle class in the car constructor class

		HondaCity(int x, int y) : Car(x, y) {
			cout << "Honda city constructor " << endl;
		 }

		 ~HondaCity() {
			cout << "Honda city destructor " << endl;

		}
};
