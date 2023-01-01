/*#include <iostream>
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
void FindingMId(Node *head,int c)
{
    int n=c/2;
    for(int i=0;i<n;i++){
     head=head->next;
    }
    cout<<"middle node "<<head->data;


}
int main() {

	Node *head = takeInput_Better();
   int c= count(head);
 FindingMId(head,c);

}
*/
// with help of a two moving pointer.one pointer moves two steps and other pointer moves one step . so at end ..the second pointer will be at the middle
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
/*void FindingMId(Node *head, int c)
{
     Node *q=head;
	head=head->next;
	if(c%2==0){
    while(head->next!=NULL){
     head=head->next->next;
     q=q->next;
    }
	}
	if(c%2!=0){
    while(head !=NULL){
     head=head->next->next;
     q=q->next;
    }
	}
    cout<<"middle node "<<q->data;
}*/
Node *FindingMid(Node *head) {
    Node *slow = head;
    Node *fast = head->next;  //for odd number //for even number
   //                                   |           |
    while(slow->next != NULL && (fast!=NULL && fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void FindingMidElement(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    
    while(slow->next != NULL && (fast!=NULL && fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
}


int main() {

	Node *head = takeInput_Better();
   int c= count(head);
   //1.
   // FindingMId(head,c);
	 //2.
   // Node *q=  FindingMid(head);
	//cout<<q->data;
	//3.
	 Node *q=FindingMid(head);
	 FindingMidElement(head);


}