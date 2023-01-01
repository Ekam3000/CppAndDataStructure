/*Remove all even parity nodes from a Doubly linked list
Input: DLL = 18 <=> 15 <=> 8 <=> 9 <=> 14 
Output: 8 <=> 14 
Explanation: 
The linked list contains : 
18 -> 10010, parity = 2 
15 -> 1111, parity = 4 
8 -> 1000, parity = 1 
9 -> 1001, parity = 2 
14 -> 1110, parity = 3 
Here, parity for nodes containing 18, 15 and 9 are even. 
Hence, these nodes have been deleted
*/
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
class LinkedList2
{
private:
    Node *first;

public:
    LinkedList2()
    {
        first = NULL;
    }
    LinkedList2(int A[], int n);
    ~LinkedList2();
    void EvenParity2(int c);
    int Length2();
    void Display2();
};
LinkedList2::LinkedList2(int A[], int n)
{
    Node *last, *t;
    int i = 0;
    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
LinkedList2::~LinkedList2()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
int LinkedList2 ::Length2()
{
    Node *p = first;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void LinkedList2::Display2()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    return;
}
void LinkedList2::EvenParity2(int c)
{
    int count = 0;
    Node *p = first;
    int n;
    int rem;
    int i = 0;
    int j = 0;
    int A[10];
    while (j < c)
    {
        n = p->data;
        while (n > 0)
        {
            rem = n % 2;
            n = n / 2;
            if (rem == 1)
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            A[i++] = p->data;
        }
        count = 0;
        j++;
        p = p->next;
    }
    LinkedList2 l3(A, i);
    l3.Display2();
    return;
}
int main()
{
    int B[] = {18, 15, 8, 9, 14};
    LinkedList2 l2(B, 5);
    cout << "for the doubly linked list: ";
    int d = l2.Length2();
    l2.Display2();
    l2.EvenParity2(d);
}