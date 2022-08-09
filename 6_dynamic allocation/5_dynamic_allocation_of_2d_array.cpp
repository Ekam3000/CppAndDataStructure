#include <iostream>
using namespace std;
int main()
{
	// m ->number of rows of 2d
	// n-> number of column of 2d
	int m, n;
	cin >> m >> n;
	// new int*[1] representing first row of the total of m rows and to store the address of first row pointer double pointer is used.
	// array of integer pointers ->	{int*[1],int*[2],int*[3],int*[4].....m times}
	int **p = new int *[m];
	for (int i = 0; i < m; i++)
	{
		// for storing individual row's
		/*	p[1] = new int[n];
		   p[2] = new int[n];
		   p[3] = new int[n];.... */
		p[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> p[i][j];
		}
	}
	// OR
	/*for (int i = 0; i < m; i++) {
		p[i] = new int[i + 1];
		for (int j = 0;j <n; j++) {
			cin >> p[i][j];
		}
	}*/
	// memory delocation
	for (int i = 0; i < m; i++)
	{
		delete[] p[i];
	}
	delete[] p;
}
