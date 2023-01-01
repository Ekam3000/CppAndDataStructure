// running stream -- a stream of lot of numbers such that u cannot store all those numbers.

// a simple approach can be like to store all the numbers and then sort them , so a lot of memory will be used and sorting will take O(NlogN) time.

// hint: using a heap.
//  a min heap will be used

// in the worst case u are going to insert and pop every element
// each insertion will take logk time and each poping will take logk time ... so overall complexity is Nlogk time
// and it is better than NlogN approach.

// EOF used to denote the end of file.

#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
void print_query(priority_queue<int, vector<int>, greater<int>> k) // yaha par int k ke kaam nahi chale ga jaise jab vector<int> hota tha to hum int k likh dete when required in function parameter.
{ // stl class are pass be value when function is callled
    while(!k.empty())
    {
        cout << k.top() << ' ';
        k.pop();
    }
}
int main()
{
    int k;
    cin >> k; // the top most elements u need.
    // to find largest k numbers (using a query point).
    priority_queue<int, vector<int>, greater<int>> pq; // pq(k) // priority queue ka size nahi bta sakte ese.
    int no;
    int cs =0;
    // running stream
    while (scanf("%d",&no) != EOF) // we are going to read numbers until the end of file does'nt occurs.
    {
       if(no==-1)
       {
           print_query(pq);
       }
       else
       {
           if(cs<k)
           {
               pq.push(no);
               cs++;
           }
           else
           {
               if(no>pq.top())
               {
                   pq.pop();
                   pq.push(no);
               }
           }
       }
    }
    return 0;
}
