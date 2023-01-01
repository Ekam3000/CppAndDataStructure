/*Remove all even parity nodes from a Circular Singly Linked List
Input: CLL = 9 -> 11 -> 34 -> 6 -> 13 -> 21
Output: 11 -> 13 -> 21 
Explanation: 
The circular singly linked list contains : 
11 -> 1011, parity = 3 
9 -> 1001, parity = 2 
34 -> 100010, parity = 2 
6 -> 110, parity = 2 
13 -> 1101, parity = 3 
21 -> 10101, parity = 3 
Here, parity for nodes containing 9, 34, and 6 are even. 
Hence, these nodes have been deleted.
*/
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList1
{
private:
    Node *Head;
public:
    LinkedList1(int A[], int n);
    ~LinkedList1();
    void EvenParity1(int c);
    int Length1();
    void Display1();
};
LinkedList1::LinkedList1(int A[], int n)
{
    Node *last, *t;
    int i = 0;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
LinkedList1::~LinkedList1()
{
    Node *p = Head;
    while (Head)
    {
        Head = Head->next;
        delete p;
        p = Head;
    }
}
int LinkedList1::Length1()
{
    Node *p = Head;
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}
void LinkedList1::Display1()
{
    Node *p = Head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
    cout << endl;
}
void LinkedList1::EvenParity1(int c)
{
    int count = 0;
    Node *p = Head;
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
    LinkedList1 l3(A, i);
    l3.Display1();
}
int main()
{
    int A[] = {9, 11, 34, 6, 13, 21};
    LinkedList1 l1(A, 6);
    cout << "for the circular linked list: ";
    int c = l1.Length1();
    l1.Display1();
    l1.EvenParity1(c);
}