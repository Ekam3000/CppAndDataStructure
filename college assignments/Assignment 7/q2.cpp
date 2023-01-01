#include <iostream>
#include <unordered_map>
using namespace std;
void given_sum(int *a, int size, int sum)
{
    unordered_map<int, int>seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
        {
            seen[a[i]]++;
        }
        else
        seen[a[i]] = 1;
    }
    for (int i =0; i <size; i++)
    {
        int b= sum-a[i];
       if(seen[b] != 0)
       {
        cout<<"yes there exists a pair given sum :"<<a[i]<<" "<<b<<endl;
        seen[a[i]]--;
        seen[b]--;
       }
    }
}
int main()
{
    int a[] = {1,2,3,4,4,6,5};
    given_sum(a, 7, 8 );
}