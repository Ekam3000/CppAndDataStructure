#include<iostream>
using namespace std;
struct Array
{
 int A[10];
 int size;
 int length;
}; 
 void Display(struct Array arr)
 {
 int i;
 cout<<"\nElements are\n";
 for(i=0;i<arr.length;i++)
 cout<<"\t"<<arr.A[i];
 }
 // since we have to change out our struct object so pass by address
 void Append(struct Array *arr,int x)
 {// here append function means adding array after the last array element
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 { // inserting an element at particular place of array
 int i;
 
 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 } 
int main(){
    struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,0,12);
Display(arr1);
 return 0;
}