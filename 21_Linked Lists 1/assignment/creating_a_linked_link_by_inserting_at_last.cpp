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

Node *head=NULL;
void takeInput_Better(int data) {
	Node *tail;
	if(head==NULL){
	 head = NULL;
	 tail = NULL;
	}
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
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {
	takeInput_Better(8);
	takeInput_Better(2);
	takeInput_Better(3);
	takeInput_Better(4);
	print(head);
}
