/*Given a sorted array arr[] of N integers, The task is to find the multiple missing elements in the array between the ranges [arr[0], arr[N-1]].
Input: arr[] = {6, 7, 10, 11, 13}
Output: 8 9 12
Explanation:
The elements of the array are present in the range of the maximum and minimum array element [6, 13]. Therefore, the total values will be {6, 7, 8, 9, 10, 11, 12, 13}.
The elements from the above range which are missing from the array are {8, 9, 12}.


Input: arr[] = {1, 2, 4, 6}
Output: 3 5*/
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[15];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cout << "\t";
    }
    int diff = A[0] - 0;
    int missingElement;
    int count = 0;
    int array[10];
    for (int i = 0; i < n; i++)
    {
        if ((A[i] - i) != diff)
        {
            while (diff < A[i] - i)
            {

                array[count++] = i + diff;
                diff++;
            }
        }
    }
    cout << endl<< "missing elements:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
}*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[15];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int m = A[0];
    cout << "missing elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != m)
        {
            while (A[i] != m)
            {
                cout << m << " ";
                m++;
            }
        }
        m++;
    }
}