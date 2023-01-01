#include <iostream>
using namespace std;
int main()
{
 cout << "----MENU----" << endl;
 cout << "1.DISPLAY" << endl;
 cout << "2.INSERT" << endl;
 cout << "3.DELETE" << endl;
 cout << "4.SEARCH" << endl;
 cout << "5.EXIT" << endl;
 int n, a, arr[10], b, c, d, e;
 cout << "Enter the Size of the Array" << endl;
 cin >> a;
 for (int i = 0; i < a; i++)
 {
 cin >> arr[i];
 }
 cin>>n;
 switch (n)
 {
 case 1:
 {
 cout << "The array is " << endl;
 for (int i = 0; i < a; i++)
{
}
 break;
 }
 case 2:
 {
 cout << "Enter the Position Where You Want to Insert the element" << endl;
 cin >> b;
 cout << "Enter the Element" << endl;
 cin >> c;
 a++;
 for (int i = a - 1; i <= b; i--)
 {
 arr[i] = arr[i - 1];
 }
 arr[b - 1] = c;
 for (int i = 0; i < a; i++)
 {
 cout << arr[i] << endl;
 }
 break;
 }
 case 3:
 {
 cout << "Enter the Element To Be Deleted" << endl;
 cin >> d;
 int i;
 for (i = 0; i < a; i++)
 {
 if (arr[i] == d)
 break;
 }
 a = a- 1;
 for (int j = i; j < a; j++)
 {
 arr[j] = arr[j + 1];
 }
 for( int j=0;j<a;j++){
 cout<<arr[j]<<endl;
 }
 break;
 }
 case 4:
 {
 cout << "Enter the Element to be Searched" << endl;
 cin >> e;
 int flag = 0;
 for (int i = 0; i < a; i++)
 {
 if (arr[i] == e)
 {
 cout << "Found" << endl;
 flag = 1;
 break;
 }
 else
 {
 flag = 0;
 }
 }
 if (flag == 0)
 {
 cout << "Not Found" << endl;
 }
 break;
 }
 case 5:
 {
 return 0;
 }
 }
 return 0;
}