#include <iostream>
using namespace std;
int main()
{
	// dynamically allocation or heap allocation
	// heap me memory chahiye to new int likho
	//  isse store karna hai to int *p=new int likho
	int *p = new int;
	// new int memory(4 bytes in case of int) ka adress la kar deta hai to isse hum  pointer me store kare ge.
	//  new int karnew se 4 byte heap me allocate ho gye but saath hi saath 4 byte(8 in other pc) stack me allocate ho gye pointer ke liye
	*p = 10;
	cout << *p << endl;
	double *pd = new double;
	char *c = new char;
	int *pa = new int[50];
	int n;
	cout << "Enter num of elements" << endl;
	cin>>n;
	// hum run time par hi bta sakte hai kitne number ka array lena hai.
	int *pa2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> pa2[i];
	}
	// pa2[1]=1;
	// pa2[2]=4;
	// pa2[3]=5;
	// etc  essse bhi kar sakte hai.
	int max = -1;
	for (int i = 0; i < n; i++)
	{
		if (max < pa2[i])
		{
			max = pa2[i];
		}
	}
	cout << max << endl;
}
