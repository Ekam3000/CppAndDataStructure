#include <iostream>
using namespace std;
int main()
{
    int a[10];

    cout << a << endl;
    cout << &a[0] << endl;
    cout << &0 [a] << endl;
    cout << &a << endl;
    //cout << &(a +1) << endl; // error & is an uniry operant
    cout << (a +1) << endl; 

    a[0] = 5;
    cout << *a << endl;
    *(a +1)=7;
    cout << *(a + 1) << endl;
    (*(a+1))++;
    cout << *(a + 1) << endl;
    cout << a + 1 << endl;
    (*a)++;
     cout << *a << endl;

    // a+i,the address of array integer
    //a[i],i[a]
    // *(a+i),dereferencing the  array integer
    //a[i],i[a]
    cout << sizeof(a) << endl;
    // but in case of pointer it was
    // 4 (the 4 is in my pc , in some other pc it will be 8)
    //int *p= &a[0];
    //or
    int *p = a;
    cout << p << endl;
    cout << &p << endl; // this is address of pointer
    cout << sizeof(p) << endl;
    //now
    p = &a[3];
    /*pointer incrementation.that will we good to define only if pointer p is earlier initiated to some other element of array (in this case to a[0]) eg-> int *p=a
    after is u can use the below line.*/
    //or p=p+4; 
    // or p=a+4;
    cout << p << endl;
    p++;
    cout << p << endl;
    //so we can change the address(input)
    // in the pointer box.
    // but it is not in the case of
    // array element(in terms of address incremetation) i.e ->
    //a =a+3; is not posssible
    // a++ bhi nii kar sakte .
    int b[5] ={1,2,3,4,5};
    int *q=b;
    cout<<b[3]<<endl;
    cout<<b[4]<<endl;
    cout<<b[2]<<endl;
    
    cout<<&b[3]<<endl;
    cout<<&b[4]<<endl;
    cout<<&b[2]<<endl;
    
    cout<<q[3]<<endl;
    cout<<q[4]<<endl;
    cout<<q[2]<<endl;
    
    cout<<&q[3]<<endl;
    cout<<&q[4]<<endl;
    cout<<&q[2]<<endl;
     q[3]++;
     q[4]++;
     q[2]++;
    cout<<q[3]<<endl;
    cout<<q[4]<<endl;
    cout<<q[2]<<endl;
}
