/*priority queue is not actually implimented as a queue ,it is implimented as heap.
push and pop are major function
in a heap operation
1.push() takes O(logN) time pretty fast
2.pop() takes O(logN) time pretty fast
3.top() takes O(1) time.

if there are 10^10 elements
Log(10^10) then in just 10 steps u can push an element and pop an element.

4. empty()
*/
#include <iostream>
#include <queue> // it contains the queue class as well as the priority queue class.
#include <vector>
#include <functional> // sometimes greater<int> may give an error . so include this.
using namespace std;
int main()
{
    // priority_queue<int>pq;// by default this priority queue is based upon the max heap where u get elements from max to minimum order.

    // to change the order i.e to obtain the min heap , u have to do like this.
    // priority_queue<int,vector<int>,_______>> pq;
    // the third argument is an comparator that can be inbuilt or user defined .. inbuilt argument is greater<int>
    priority_queue<int, vector<int>, greater<int>> pq;

    /*  The second template parameter is a type use for internal representation of data. std::priority_queue is a container adaptor, which means that it's not a container by itself - it uses some other container and wraps it with certain kind of utilities.
     */
    int no;
    for (int i = 0; i <= 4; i++)
    {
        cin >> no;
        pq.push(no); // O(logN).
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
/*
#include <functional>
#include <queue>
#include <vector>
#include <iostream>

template<typename T>
void print_queue(T q) { // NB: pass by value so the print uses a copy
    while(!q.empty()) {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';
}

int main() {
    std::priority_queue<int> q;

    const auto data = {1,8,5,6,3,4,0,9,7,2};

    for(int n : data)
        q.push(n);

    print_queue(q);

    std::priority_queue<int, std::vector<int>, std::greater<int>>
        q2(data.begin(), data.end());

    print_queue(q2);
 }
 */