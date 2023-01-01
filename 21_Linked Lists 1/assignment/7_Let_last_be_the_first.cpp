/*
Let last be the first
Send Feedback
Write a function that moves last element to front in a given singly Linked List.
For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.
You just need to return the head of new linked list, don't print the elements.
Input format :
Line 1 : Linked list elements of length n (separated by space and terminated by -1)
Output format :
Updated list elements (separated by space)
Constraints :
1 <= n <= 10^4
Sample Input :
 1 2 3 4 5 6 -1
Note : -1 at the end of input is just a terminator representing the end of linked list. This -1 is not part of the linked list. Size of given linked list is 6.
Sample Output :
 6 1 2 3 4 5
 */
#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
     Node()
	 {
		 next=NULL;
	 }
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

Node *LastBeTheFirst(Node *head,int c)
{
	Node *q=head;
	int i=1;
	while(i<(c-1))
	{
		q=q->next;
		i++;
	}
	int b= q->next->data;
	q->next=NULL;
    
     Node *t=new Node;
	t->data=b;
	t->next=head;
	head=t;
	return head;

}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	Node *head = takeInput_Better();
    int c=count(head);
	head =LastBeTheFirst(head,c);
	print(head);
}

