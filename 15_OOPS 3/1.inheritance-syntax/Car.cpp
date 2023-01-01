class Car : public Vehicle {
	public :
		int numGears;
		void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
			//cout << "Max Speed : " << maxSpeed << endl;
		}
};
/* 
public, protected, and private inheritance have the following features:

public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
protected inheritance makes the public and protected members of the base class protected in the derived class.
private inheritance makes the public and protected members of the base class private in the derived class.
 */

/*
private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;
		*/