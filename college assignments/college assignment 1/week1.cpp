#include<iostream>
using namespace std;
int findMostFrequentElement(int A[], int n)
{
    int max_freq = 0;
    int ans = -1;
    for (int i = 0;i<n;i++)
    {
        int curr_freq = 1;
        for (int j = i+1;j<n;j++)
            if (A[j] == A[i])
                curr_freq = curr_freq + 1;

        if (max_freq < curr_freq)
        {
            max_freq = curr_freq;
            ans = A[i];
        }
       else if (max_freq == curr_freq)
            ans = min(ans, A[i]);
    }
   return ans;
}
int main()
{
    int A[]={2,2,2,3,3,4,5,3,5,7,7,7,7,7,5};
    int n= sizeof(A)/sizeof(int);
    int ans=findMostFrequentElement(A, n);
    cout<<ans;
}
/*
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
    int function(int A[], int n)
    {
        int max_freq = 0;
        int k = 0;
        int a[10];
        for (int i = 0; i < n; i++)
        {
            if (A[i] == A[i - 1])
            {
                continue;
            }

            else
            {
                int curr_freq = 1;
                for (int j = i + 1;A[j]==A[j+1]; j++)
                {

                    if (A[j] == A[i])
                        curr_freq = curr_freq + 1;
                } 
                curr_freq++;
                a[k++] = curr_freq;
            }
        }
        k=0;
        for (int i = 0; i < n; i++)
        {
            if(A[i]!= A[i+1])
            {
    
              cout <<A[i]<<"->"<< a[k++] << "\t";
            }
        }
    }
    int main()
    {
        int A[] = {2, 2, 2, 3, 3, 4, 5, 3, 5, 7, 7, 7, 7, 7, 5};
        int n = sizeof(A) / sizeof(int);
        bubbleSort(A, n);
        function(A, n);
    }
    */
/*
#include <iostream>
#include <vector>
using namespace std;
bool minHeap = false;
bool compare(int a, int b)
{
    if (minHeap)
    {
        return a < b;
    }
    else
    {
        return a > b;
    }
}
void buildHeap(vector<int> &v)
{
    for (int i = 2; i < v.size(); i++)
    {
        int idx = i;
        int parent = i / 2;
        while (idx > 1 and v[idx] > v[parent])
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }
}
void heapify(vector<int> &v, int idx, int size)
{
    int left = 2 * idx;
    int right = left + 1;
    int min_idx = idx;
    int last = size - 1;
    if (left <= last and compare(v[left], v[idx]))
    {
        min_idx = left;
    }
    if (right <= last and compare(v[right], v[idx]))
    {
        min_idx = right;
    }
    if (min_idx != idx)
    {
        swap(v[idx], v[min_idx]);
        heapify(v, min_idx, size);
    }
}
void heapSort(vector<int> &arr)
{
    buildHeap(arr);
    int n = arr.size();
    while (n > 1)
    {
        swap(arr[1], arr[n - 1]);
        n--;
        heapify(arr, 1, n - 1);
    }
}
int main()
{
    vector<int> v;
    v.push_back(-1);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    heapSort(v);
    for (auto it = v.begin() + 1; it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
*/