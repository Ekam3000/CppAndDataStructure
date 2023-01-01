/*Union of LL
Send Feedback
Given a two Linked Lists, find out union of both given input lists and return the new Linked List.
Order of elements are not important.
Note : You don't need to print the linked list, just return the head. It will be printed internally.
Input format :
Line 1 : Linked list 1 elements (separated by space and terminated by -1)
Line 2 : Linked list 2 elements (separated by space and terminated by -1)
Sample Input 1 :
1 2 3 4 -1
8 7 5 3 -1
Sample Output 1 :
1
2
3
4
8
7
5
Sample Input 2 :
1 2 1 1 -1
8 -1
Sample Output 2 :
1
2
1
1
8
*/

// below method works for sorted linked list
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
Node* takeInput_Better1() {
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

Node *UnionOfLL(Node *p,Node *q)
{
 Node *third=NULL;
 Node *last;
 if(p->data < q->data)
 {
 third=last=p;
 p=p->next;
 third->next=NULL;
 }
 else if(p->data > q->data)
 {
 third=last=q;
 q=q->next;
 third->next=NULL;
 }
 else
 {
third=last=p;
 p=p->next;
 third->next=NULL;
 q=q->next;
  
 }
 while(p && q)
 {
 if(p->data < q->data)
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;
 
 }
 else if(p->data > q->data)
 {
 last->next=q;
 last=q;
 q=q->next;
 last->next=NULL;
 
 }
 else
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;
 q=q->next;
 }
 }
 if(p)last->next=p;
 if(q)last->next=q;
 

 return third;
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	Node *head = takeInput_Better();
	Node *second = takeInput_Better1();
    count(head);
    count(second);
    Node *third= UnionOfLL(head,second);
	print(third);
}
// above method works for sorted linked list.

// method 2 for unsorted linked list 
//1. concatinate the two linked lists
//2. remove duplicates from the linked list 
//3. print the linked list.