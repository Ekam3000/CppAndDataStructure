/*Code: Merge Sort
Send Feedback
 Given a singly linked list of integers, sort it using 'Merge Sort.'
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format :
For each test case/query, print the elements of the sorted singly linked list.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 Sample Output 2 :
2
-1
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 
*/

/*
#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
     Node()
     {

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
Node * merge(Node *head,Node *second)
{
  Node *third=NULL;
  Node *last=NULL;
  if(head->data<= second->data)
  {
      third =head;
      last=head;
      head=head->next;
      last->next=NULL;
  }
  else
  {
     third =second;
      last=second;
      second=second->next;
      last->next=NULL;
  }
  while(head != NULL && second !=NULL)
  {
      if(head->data >= second->data)
      {
          last->next=second;
          last=second;
          second=second->next;
          last->next=NULL;
      }
      else
      {
          last->next=head;
          last=head;
          head=head->next;
          last->next=NULL;
      }
    }

     while(head != NULL)
      {
      last->next=head;
      last=head;
      head=head->next;
        last->next=NULL;
      }
      while(second != NULL)
      {
      last->next=second;
      last=second;
      second=second->next;
      last->next=NULL;
      }
    return third;
}
Node *middle(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    
    while(slow->next != NULL && (fast!=NULL && fast->next!=NULL)) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *sort(Node *head){ 
    if(head->next == NULL) {
        return head;
    }
    Node *mid = new Node;
    Node *head2 = new Node;
    mid = middle(head);
    head2 = mid->next;  
    mid->next = NULL;
    //recursive call to sort() hence diving our problem, and then merging the solution
    Node *a=sort(head);
    Node *b=sort(head2);
    Node *finalhead = merge(a,b); 
    //or
   // Node *finalhead = merge(sort(head),sort(head2)); 
    return finalhead;
}
    void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {
	Node *head = takeInput_Better();
    int c= count(head);
    head = sort(head);
    print(head);
} 
*/

#include<iostream>
using namespace std;
//Node structure
struct Node{
    int data;
    Node *next;
};
//function to insert in list
void insert(int x,Node **head) {
    if(*head == NULL){
        *head = new Node;
        (*head)->data = x;
        (*head)->next = NULL;
        return;
    }
    Node *temp = new Node;
    temp->data = (*head)->data;
    temp->next = (*head)->next;
    (*head)->data=x;
    (*head)->next=temp;
}
//function to print the list
void print(Node *head) {
    Node *temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node * merge(Node *head,Node *second)
{
  Node *third=NULL;
  Node *last=NULL;
  if(head->data<= second->data)
  {
      third =head;
      last=head;
      head=head->next;
      last->next=NULL;
  }
  else
  {
     third =second;
      last=second;
      second=second->next;
      last->next=NULL;
  }
  while(head != NULL && second !=NULL)
  {
      if(head->data >= second->data)
      {
          last->next=second;
          last=second;
          second=second->next;
          last->next=NULL;
      }
      else
      {
          last->next=head;
          last=head;
          head=head->next;
          last->next=NULL;
      }
    }
      while(head != NULL)
      {
      last->next=head;
      last=head;
      head=head->next;
        last->next=NULL;
      }
      while(second != NULL)
      {
      last->next=second;
      last=second;
      second=second->next;
      last->next=NULL;
      }
    return third;
}  // yaha bhi ek hi element print hoga iss merge function ko include karne par.
//function to calculate the middle Element
Node *middle(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    
    while(slow->next != NULL&&(fast!=NULL&&fast->next!=NULL))
     {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
//function to sort the given list
Node *sort(Node *head){
    if(head->next == NULL) 
    {
        return head;
    }
    Node *mid = new Node;
    Node *head2 = new Node;
    mid = middle(head);
    head2 = mid->next;  
    mid->next = NULL;
    //recursive call to sort() hence diving our problem, and then merging the solution
    Node *finalhead = merge(sort(head),sort(head2)); 
    return finalhead;
}
int main(void) {
    Node *head = NULL;
    int n[]={7,3,21,28,7,6,9,};
    for(int i=0;i< 7;i++) {
        insert(n[i],&head);   //inserting in the list. here head will gets the new inserted value and will have the address of second last inserted value.
    }
   // print(head);
  cout<<"\nSorted Linked List is: \n";
    print(sort(head));     //printing the sorted list returned by sort()
    return 0;
}
