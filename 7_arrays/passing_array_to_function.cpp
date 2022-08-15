#include <iostream>
using namespace std;
void increment(int *a, int array[], int n)
// OR
// void increment(int*a , int*array,int n) //  array will always be pass as pass by address
{
    a++;
    // array[i] meaning is pointing to memory location whose address is=100+i*4
    array[0]++; // value me incrementation
    // supposing address of first element of array is 100.array[0](100 +0*4) is pointing to memory address whose addrsss is 100. and array[0]++ meaning usme jo value rakhe hai usko one(1) value seincrement kar do.
}
int main()
{
    int a = 10;
    cout << endl;
    int array[10] = {1, 7, 9};
    increment(a, array, 10);
    increment(&a, array, 10); //  array will always be pass as pass by address
    cout << "a:"
         << "\t" << a << endl;
    cout << array[0];
}
