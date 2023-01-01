/*Code: Midpoint of LL
Send Feedback
For a given singly linked list of integers, find and return the node present at the middle of the list.
Note :
If the length of the singly linked list is even, then return the first middle node.

Example: Consider, 10 -> 20 -> 30 -> 40 is the given list, then the nodes present at the middle with respective data values are, 20 and 30. We return the first node with data 20.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space. 
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
 Output Format :
For each test case/query, print the data value of the node at the middle of the given list.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5 
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
1
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
2 
-1
1 2 3 4 -1
Sample Output 2 :
2
*/

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
/*void FindingMId(Node *head,int c)
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
    cout<<"middle node "<<q->data; */

/*Node *FindingMid(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    
    while(slow->next != NULL && (fast!=NULL && fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}*/
void FindingMid(Node *head) {
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
   // 1.
   // FindingMId(head,c);
   //2.
   // Node *q=  FindingMid(head);
	//cout<<q->data;
	//3.
	 FindingMid(head);


}
