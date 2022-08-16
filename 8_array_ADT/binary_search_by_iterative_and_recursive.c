#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
  int start = 0;
  int end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == x)
    {
      return mid;
    }
    else if (x < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int x;
  cout << "enter the searching element" << endl;
  cin >> x;
  int n;
  cin >> n;
  int i = 0;
  int arr[10];
  cout << "print a sorted array:" << endl;
  for (i; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << binarySearch(arr, n, x);
}

/*--------------------------------------------------- */
#include <stdio.h>
struct Array
{
  int A[10];
  int size;
  int length;
};
void Display(struct Array arr)
{
  int i;
  printf("\nElements are\n");
  for (i = 0; i < arr.length; i++)
    printf("%d ", arr.A[i]);
}
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
int BinarySearch(struct Array arr, int key)
{
  int l, mid, h;
  l = 0;
  h = arr.length - 1;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == arr.A[mid])
    {
      swap(&arr.A[mid], &arr.A[0]);
      return mid;
    }
    else if (key < arr.A[mid])
      h = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}
// parameter passing me gorr karo
/*int RBinSearch(int a[],int l,int h,int key)
{

 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid]){
     swap(&a[mid],&a[0]);
 return mid;

 }
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);

 else
 return RBinSearch(a,mid+1,h,key);
 }
return -1;
}*/
int main()
{
  struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
  printf("%d", BinarySearch(arr1, 16));
  // or
  /*struct Array arr1;
  //arr1.A[]={2,3,9,16,18,21,28,32,35}; //ye error dega ..kisi array ko hum esse innitialise nii kar sakte structure ke object ke through
  //we will take help of for loop
  arr1.size=10;
  arr1.length=9;
  printf("enter array elements:\n");
     for(int i=0;i<arr1.length;i++)
     {
     scanf("%d",&arr1.A[i]);
     }
  printf("%d",RBinSearch(arr1.A,0,arr1.length,21));*/
  Display(arr1);
  return 0;
}
// complexity of the function will be O(log2N).

/* limitations-->
 1.list must be sorted.
 2.one must have direct access to the middle element in any sublist.
 3.keeping data in sorted array is normally expensive when there are many iterations.
