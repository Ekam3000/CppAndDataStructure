#include <iostream>
using namespace std;
#include "Node.cpp"
Node* reverseLL(Node *head) {
	if(head == NULL || head -> next == NULL) 
	{
		return head;
	}
	Node *smallAns = reverseLL(head -> next); // suppose input is 1 2 3 4 5 reverse linked list hame 5 4 3 2 laa kar dega ab hame sirf 1 ko 2 ke saaath connect karna , smallAns ke pass 5 wali node ka address hai.
	Node *temp = smallAns;
	while(temp -> next != NULL) {
		temp = temp -> next;
	}
	temp -> next = head;
	head -> next = NULL; // so that head not points to our '2' number . as innitially it was pointing
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
int main() {
	Node *head = takeInput_Better();
	head = reverseLL(head);
	print(head);
}
