#include<iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;
    Node(){

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

Node *head =NULL;

void create(int A[],int n)
{
 int i;
 Node *last;
 head=new Node;
 head->data=A[0]; // head ka data
 head->next =NULL;										
 last=head; 
 
 for(i=1;i<n;i++)
 {
 Node *t = new Node ;
 t->data=A[i]; 
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void RemovingAndFindingDuplicates(Node *head,int c)
{
    Node *temp =head;
    Node *q =head;
    int count=1;
    
    for(int i=1;i<=c;i++)
    {
        q=temp;
        temp=temp->next;
         
        if(q->data==temp->data)
        {
            int j;
          
            for( j=i;q->data==temp->data;j++)
            {
                temp=temp->next;
                count++;
                
            }
            q->next= temp;
            cout << q->data << endl;
            cout << "no of repitation" << count << endl;
            count = 1;
            i = j;
        }
    }
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int main() {

	int A[]={3,5,5,5,8,9,9,10,10};
    create(A,9);
    int c=count(head);
    cout<<c<<endl;
    print(head);
    cout<<endl;
    RemovingAndFindingDuplicates(head,c);
}
//output is prakar aa rahi hai means mera code galat hai
/*
9
3 5 5 5 8 9 9 10 10
5
no of repitation3
9
no of repitation2
*/