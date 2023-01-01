/*Divide linked list in two
Send Feedback
Write a function that takes one list and divides up its nodes to create two smaller lists A and B. The sub lists should be made from alternating elements in the original list.
Nodes should be in the reverse order of which they occurred in the source list.
Print both linked lists in different lines.
Input format :
Line 1 : Linked list elements of length n (separated by space and terminated by -1)
Output format :
Line 1 : Output Linked List 1 elements (separated by space)
Line 2 : Output Linked List 2 elements (separated by space)
Constraints :
1 <= n <= 10^4
Sample Input :
 8 2 5 9 1 4 3 7 -1
Note : -1 at the end of input is just a terminator representing the end of linked list. This -1 is not part of the linked list. Size of given linked list is 8.
Sample Output :
 3 1 5 8
 7 4 9 2
 */
#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
     
	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};

int count( Node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}

Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			// tail = newNode;
			// Or
			tail = tail -> next;
			
		}
		cin >> data;
	}
	return head;
}
void DividingLLinTwo(Node *p)
{
 Node *q=NULL,*r=NULL;
 
 while(p!=NULL)
 {
 r=q;
 q=p;
 p=p->next;
 q->next=r;
 }
 int A[10];
 int i=0;
 while(q!=NULL)
 {
    cout<<q->data<<" ";
    q=q->next;
    if(q!=NULL)
    {
    A[i++]=q->data;
    q=q->next;
    }
}
cout<<endl;
for(int j=0;j<i;j++)
{
    cout<<A[j]<<" ";
}

}

int main() {

	Node *head = takeInput_Better();
    //count(head);
    DividingLLinTwo(head);
	
}

