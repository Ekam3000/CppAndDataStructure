/*Print Reverse LinkedList
Send Feedback
You have been given a singly linked list of integers. Write a function to print the list in a reverse order.
To explain it further, you need to start printing the data from the tail and move towards the head of the list, printing the head data at the end.
Note :
You can’t change any of the pointers in the linked list, just print it in the reverse order.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
Remember/Constraints :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
Output format :
For each test case, print the singly linked list of integers in a reverse fashion, in a row, separated by a single space.

Output for every test case will be printed in a seperate line.
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^3
Time Limit: 1sec

Where 'M' is the size of the singly linked list.
Sample Input 1 :
1
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
Sample Input 2 :
2
1 2 3 -1
10 20 30 40 50 -1
Sample Output 2 :
3 2 1
50 40 30 20 10
*/
/*methods->
1. reversing elements  swapping of elements
2. reversing links (starting from last element , last element should points on second last element and so on)
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
void reverse1(Node* head,int c)
{
    Node *temp = head;
    int array[c];
    for(int i=0;i<c;i++)
    {
        array[i]= temp->data;
        temp=temp->next;
    }
    temp=head;
    for(int i=c-1;i>=0;i--)
    {
     temp->data = array[i];
     temp= temp->next;
    }
}
// using sliding pointers. mere  me ye method kaam ni kar raha 
Node * reverse2(Node *head)
{
    Node *temp =head;  // first pointer 
    Node *p =NULL;    // second pointer following temp
    Node *q =NULL;   // third pointer following p
    while(temp!= NULL)
    {
        q=p;
        p=temp;
        temp=temp->next;
        p->next=q;

    }
    head =p; // at last pointing head to last node 
    return head;
}
// method 3-> method 3 bina head ko globally declare kiye ho hi ni sakta. so below written method 3 is incomplete without globally declared head.
/*Node* Reverse3( Node *q, Node *p)
{
 if(p)
 {
 Reverse3(p,p->next);
 p->next=q;
 }
 else
 head=q;
}*/
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	Node *head = takeInput_Better();
    int c=count(head);
   // reverse1(head,c);
    //print(head);
    head = reverse2(head);
	print(head);
  // Reverse3(NULL,head);
    //print(head); 
}