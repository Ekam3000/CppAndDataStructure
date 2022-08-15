/*if size is odd eg 5
input array 3 2 4 1 5
we have to recover this array as 1 2 3 4 5
if size is even eg 6
we have to recover this array as 1 2 3 4 5 6
input array 3 4 2 5 1 6 */
#include <iostream>
using namespace std;

void recoverArray(int input[], int n, int output[])
{
	int left, right;

	int mid = n / 2;
	int i = 0;
	if (n % 2 != 0)
	{
		output[mid] = input[i];
		left = mid - 1;
		right = mid + 1;
		i++;
	}
	else
	{
		left = mid - 1;
		right = mid;
	}

	while (i < n)
	{
		output[left] = input[i];
		left--;
		i++;
		output[right] = input[i];
		right++;
		i++;
	}
}

int main()
{
	int input[100];
	int n;

	int output[100];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	recoverArray(input, n, output);

	for (int i = 0; i < n; i++)
	{
		cout << output[i] << " ";
	}
}