/*#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1-j;i++){
        if(arr[i+1]<arr[i]){
            int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
    }
}
}
int main(){
   int  arr[10]={10,5,4,7,9,2,100};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}
*/
// time complexity of the function O(n^2)

/*In this technique, we just compare the two adjacent elements of the array and then sort
them manually by swapping if not sorted. Similarly, we will compare the next two elements
(one from the previous position and the corresponding next) of the array and sort them
manually. This way the elements from the last get placed in their correct position one
by one i.e first largest element will get placed in its correct position in one iteration.
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
    }
}
so agar hame n elements place karne hai , to hame  n-1 baar iterations karni hogi is ;isse liye ek outer loop lagana hoga for n-1 iterations(i=0 to i<n-1).. and last element apne app sahi jagah place ho jaye ga (which is the smallest element placed at first position)
void bubbleSort(int arr[], int n){
for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1-j;i++){
        if(arr[i+1]<arr[i]){
            int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
    }
}
}
significance of n-1-j, when we place.
jab hamne first largest element place karna tha last position par tab hame n-1 comparisons karne the loop me if condition me ,
jab hamne second largest element place karna tha last position par tab hame n-1-1 comparisons karne hai(i.e n-2) loop me if condition me , kyuki last element(which is the largest of all elements of given array) to place ho chuka hai last me , use ab nii chedna apni jagah se.

*/

//------------------------- b part ------------------>
/*
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n, int flag)
{
    for (int j = 0; j < n - 1 && flag == 0; j++)
    {
        flag = 1; // assuming array is sorted , so flag set to 1
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 0;
            }
        }
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7};
    int flag = 0;
    bubbleSort(arr, 7, flag);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
}
*/
/* when list is already sorted still we are going for n-1 passes , so we can use flag to signal when no interchange take place during a pass then it means that the list is alreaady sorted . so it will cut down the no. of passes.
this will not effect the complexity of the bubble sort.
as we will always takes the worst case in finding out the complexity.
No. of passes can reduce only when you consider an array which is almost in a sorted order.

question--> using bubble sort fing the number of comparisons and number of interchanges which alplabetige the letters in PEOPLE.

*/
#include <iostream>
using namespace std;
void bubbleSort(char arr[], int n, int flag, int &camp, int &itrChange)
{
    for (int j = 0; j < n - 1 && flag == 0; j++)
    {
        flag = 1;
        for (int i = 0; i < n - 1 - j; i++)
        {
            camp++;
            if (arr[i + 1] < arr[i])
            {
                itrChange++;
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 0;
            }
        }
    }
}
int main()
{
    char arr[10] = "PEOPLE";
    int flag = 0;
    int camp = 0, itrChange = 0;
    bubbleSort(arr, 7, flag, camp, itrChange);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "camparisons:" << camp;
    cout << "interChanges:" << itrChange;
}