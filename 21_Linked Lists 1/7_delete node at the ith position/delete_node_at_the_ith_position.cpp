#include <iostream>
using namespace std;
#include "Node.cpp"

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
 Node* deleteNode(Node *head, int i)
   {
	  int count = 0;
	  Node *temp = head;

	 if(i == 0) { 
	
		Node *a= head;
		Node *b=a->next;
		head = b ;
        delete a; // as we have created every node of linked list dynamically in takeInput_Better function .
		return head; 
	}
	while(temp != NULL && count < i - 1) {
		temp = temp -> next;
		count++;
	}
	if(temp != NULL) {
		Node *a = temp->next;
        Node *b = a->next;
        delete a;
        temp->next = b;

	}
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
	int i;
	cin >> i;
	head = deleteNode(head, i);
	print(head);
}
