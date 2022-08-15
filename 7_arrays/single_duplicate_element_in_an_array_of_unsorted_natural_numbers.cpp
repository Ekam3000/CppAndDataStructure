#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int array[10];
    int i = 0;
    for (i; i < n; i++)
    {
        cin >> array[i];
        cout << endl;
    }
    int j = 0;
    for (j; j < n; j++)
    {
        int k = j + 1;
        for (k; k < n; k++)
        {
            if (array[j] == array[k])
            {
                cout << "duplicate element:" << array[j];
                break;
            }
        }
    }
}
/*Another approach is to make use of the condition that all elements lies between 0
and n-2. So first calculate the sum of all natural numbers between 0 to n-2 by using the direct
formula ((n - 1) * (n - 2)) / 2 and sum of all elements of the array. Now, subtract the sum of all
natural numbers between 0 to n-2 from sum of all elements of the array. This will give you the
duplicate element present in the array.
Pseudo Code for this approach:
Function findduplicate:
 sum=0
 For i = 0 to i less than size:
sum = sum + input[i];
 n = size
 sumOfNaturalNumbers = ((n - 1) * (n - 2)) / 2
 return sum - sumOfNaturalNumbers
Time Complexity for this approach: Time complexity for this approach is O(n) as you are
traversing the array only once to calculate the sum of all elements present in the array.
❏ Let us dry run the code for the N= 9
 arr[]= 0 7 2 5 4 7 1 3 6
Sum = 0+7+2+5+4+7+1+3+6 =35
sumOfNaturalNumbers=8*7/2=28
Output = 35-28 =7
So 7 should get printed*/