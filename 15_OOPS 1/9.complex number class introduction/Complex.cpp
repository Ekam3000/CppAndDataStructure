
class Complex{
public:
float real;
 float imaginary;
 Complex(){

 }

 Complex(int r, int i){
    real =r;
    imaginary=i;
 }
 void plus(Complex &c2){
     real = real + c2.real;
     imaginary= imaginary + c2.imaginary;
 }
  Complex multiply(Complex &c2){
      Complex t;
      t.real = real*c2.real - imaginary*c2.imaginary;
      t.imaginary = real*c2.imaginary + c2.real*imaginary;
      return t;
      
  }
  void print(){
      cout<<real<<" + i"<<imaginary;
  }
};