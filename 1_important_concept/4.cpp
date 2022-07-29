#include<iostream>
using namespace std;
int main()
{
	int rows,column;
	cout<<"Enter the rows of the array";
	cin>>rows;
	cout<<"Enter the columns of the array";
	cin>>column;
	int a[rows][column];
	int *p;
	for(p=&a[0][0];p<=&a[rows-1][column-1];p++)
	{
		cin>>*p;
	}
	for(p=&a[0][0];p<=&a[rows-1][column-1];p++)
	{
		cout<<*p<<endl;
	}
	return 0;
}