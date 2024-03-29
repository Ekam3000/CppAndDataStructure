#include <iostream>
using namespace std;
#include "Node.cpp"

Node* reverseLL_3(Node *head) 
{
	if(head == NULL || head -> next == NULL)
	{
		return head;
	}
	Node *smallAns = reverseLL_3(head -> next);
	Node *tail = head -> next; // taking exampple of 1 2 3 4 --> 1 ke pass 2 ka address hai (represented by head->next) so then recursive function returns 4 3 2 .. then tail (i.e 2) is our head->next 
	tail -> next = head;
	head -> next = NULL;
	return smallAns;
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
			tail = tail -> next;
			// OR
			// tail = newNode;
		}
		cin >> data;
	}
	    return head;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}
int main() 
{
	Node *head = takeInput_Better();
	head = reverseLL_3(head);
	print(head);
}
