class student{
    public:
    int rollnumber ;
    private:
    int age;
    public:
    ~student(){
        cout<<"destructor called !"<<endl;
    }

    // default constructor 
    student(){
        cout<<"constructor 1 called !"<<endl;
    }
    // parameterized constructor
    student(int rollnumber){
        cout<<"constructor 2 called !"<<endl;
        this ->rollnumber=rollnumber;
    }
    student (int a,int r){
        cout<<"constructor 3 called !"<<endl;
        this -> age =a;
        this -> rollnumber = r;
    }
};
#include<iostream>
using namespace std;
int main(){
    student s1(90);
    student s2(101);
    student s3(20,102);
    student s4(s3);
    s1 = s2; // copy assignment operator is used when both the objects have been allocated memory.
    student s5=s4;// this is equalivalent to
     /*student s5(s4)*/
}