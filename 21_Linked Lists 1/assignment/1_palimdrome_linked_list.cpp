/*Palindrome LinkedList
Send Feedback
You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains the the elements of the singly linked list separated by a single space.
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
 Output format :
For each test case, the only line of output that print 'true' if the list is Palindrome or 'false' otherwise.
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.
Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
true
Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.
*/
#include <iostream>
using namespace std;
class Node
{
public:
  Node *prev;
 int data;
  Node *next;
};
class LinkedList
{
private:
 Node *first;
public:
 LinkedList(){first=NULL;}
 LinkedList(int A[],int n);
 ~LinkedList();


 void palimdrome(int c);
 void Display();
 int Length();
};
LinkedList::LinkedList(int A[],int n)
{
 Node *last,*t;
 int i=0;
 
 first=new Node;
 first->data=A[0];
 first->prev=first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=new Node;
 t->data=A[i];
 t->next=last->next;
 t->prev=last;
 last->next=t;
 last=t;
 }
}
LinkedList::~LinkedList()
{
 Node *p=first;
 while(first)
 {
 first=first->next;
 delete p;
 p=first;
 }
}
int LinkedList :: Length()
{
Node *p=first;
 int len=0;
 
 while(p)
 {
 len++;
 p=p->next;
 }
 return len;
}

 void LinkedList::palimdrome(int c)
 {
     Node *p=first;
     while(p->next)
     {
         p=p->next;
     }
  int i=1;
  int flag=1;
     while(i<=c/2)
     {
         if(first->data != p->data)
         {
             cout<<"false"<<endl;
             flag=2;
             break;
             
         }
         i++;
        first= first->next;
        p= p->prev;
     }
     if(flag==1)
     cout<<"true"<<endl;
 }

int main()
{
 int A[]={1,2,3,2,1};
 LinkedList l(A,5);
 int c= l.Length();
 l.palimdrome(c);
 return 0;
}


