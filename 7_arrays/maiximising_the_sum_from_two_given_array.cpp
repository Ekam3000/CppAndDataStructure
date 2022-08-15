/*6
1 5 10 15 20 25
5
2 4 5 9 15
Sample Output :
81
Explanation :
We start from array 2 and take sum till 5 (sum = 11). Then we'll switch to array at element 10
 and take till 15. So sum = 36. Now, no elements left in array after 15, so we'll continue in
 array 1. Hence sum is 81 */
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j;
        int current = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}
int maximise_sum(int array[], int input[], int k, int l)
{
    int i = 0, j = 0, max_sum = 0;

    // Traverse both array
    while (i < k && j < l)
    {
        int s1 = 0, s2 = 0;
        while (array[i] != input[j])
        {
            if (array[i] < input[j])
                s1 += array[i++];
            else
                s2 += input[j++];
        }
        if (array[i] == input[j])
        {
            s1 += array[i++];
            s2 += input[j++];
        }

        if (s1 >= s2)
            max_sum += s1;
        else
            max_sum += s2;
    }

    // Store remaining elements of first array
    while (i < k)
        max_sum += array[i++];

    // Store remaining elements of second array
    while (j < l)
    {
        max_sum += input[j++];
    }

    return max_sum;
}
int main()
{
    int n1;
    cout << "enter size for first array:";
    cin >> n1;
    int arr[10];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n1);
    printArray(arr, n1);
    int n2;
    cout << "enter size for second array:";
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n2);
    printArray(arr, n2);
    int c = maximise_sum(arr, arr, n1, n2);
    cout << endl
         << c;
}
