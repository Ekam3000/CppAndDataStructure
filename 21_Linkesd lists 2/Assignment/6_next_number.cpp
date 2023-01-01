/*Next Number
Send Feedback
Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).
Note: You don't need to print the elements, just update the elements and return the head of updated LL.
Input Constraints:
1 <= Length of Linked List <=10^6.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Output Format :
Line 1: Updated linked list elements 
Sample Input 1 :
3 9 2 5 -1
Sample Output 1 :
3 9 2 6
Sample Input 2 :
9 9 9 -1
Sample Output 1 :
1 0 0 0 
*/
#include<iostream>
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
void AddingOneToNumber();
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

void LinkedList:: Display()
{
    Node *p=first;
 while(p)
 {
 cout<<p->data<<" ";
 p=p->next; 
 }
 
 int i=0;
 while(i<=Length())
 {
	 if(i==0)
	 {
     if(first->data==1)
	 first=first->next;
	 else
	 break;
	 }
	 else if(i>0 && first->data==0)
	 {
	  first=first->next;
	 }
	 else
	 break;
	 i++;
 }
  if(i>Length())
  {
	  cout<<'0';
  }
 cout<<endl;
}

void LinkedList::AddingOneToNumber()
{
	Node *temp =first;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	// mene bohot koshish ki ki mein a ki help se apna last element 0 likh du output mein (when number of output is like this 100.. upto last digit) but mein nahi kar saka then finally mujhe display function me changes karni padi to print additional zero.

	/*Node *a= new Node;
	temp->next=a;
	a->next=NULL;
	a->prev=temp; // temp 
    */
	if(temp->data==9)
	{
	  while(temp->data == 9 && temp->prev!=first)
	  {
      temp->data=0;
	  temp=temp->prev;
	  }
	}
	if(temp->prev==first && temp->prev->data==9)
	{
     if(temp->data ==9)
	 {
       temp->data=0;
	   first->data=1;
       //a->data=0;
	 }
	 else
	 temp->data++;
	// delete a;
	}
	else if( temp->prev ==first && temp->prev->data != 9)
	{
		if(temp->data ==9)
		temp->data=0;
		first->data++;
      //  delete a;
	}
	else
	temp->data++;
//	delete a;
}
int main()
{
 int A[]={9,9,9,9,9};
 LinkedList l(A,5);
 int c= l.Length();
 l.AddingOneToNumber();
 l.Display();

 
 return 0;
}

