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
void CheckSortedArray(Node *head, int c)
{
   Node *temp=head;
   Node *q = NULL;
   int count=1;
   int flag=1;
   if(temp==NULL || c==1)
   {
	   cout<<"sorted linked list.";
   }
  /* for(int i=0;temp != NULL;i++){
	   q=temp;
	   temp=temp->next;
	   if(q->next > temp ->next){
		   cout<<"not sorted"<<endl;
	   }*/
   
   // ye for loop lagane se hum last linked list ke element ko -1 se compare kar rahe hai ..so ans me "not sorted" aa jaye ga so hum dusre condition (count length) ki lga date hai.
   for(int i=0;count<c;i++){
	   q=temp;
	   temp=temp->next;
	   if(q->data > temp ->data){
		   cout<<"not sorted"<<endl;
		   flag =2;
		   break;
	   }
	   count++;
   }
   if(flag==1){
   cout<<"sorted linked list"<<endl;
   }
}

int main() {

	Node *head = takeInput_Better();
	int c=count(head);
	CheckSortedArray(head,c);

}