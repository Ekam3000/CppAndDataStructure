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
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)
 arr->A[i]=arr->A[i+1];
 arr->length--;
 return x;
 }
 return 0;
}
int main()
{
 struct Array arr1={{2,3,4,5,6},10,5};
 cout<<"deleted element"<<Delete(&arr1,0);
 Display(arr1);
 return 0;
}