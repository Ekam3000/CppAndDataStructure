#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
// binary searh is not supportable in linked list
// here improved linear search is shown 
struct Node * LSearch(struct Node *p,int key)
{
 struct Node *q; // node pointer q follows p pointer
 
 while(p!=NULL)
 {
 if(key==p->data)
 {
 q->next=p->next; // so that previous node (before the searched node ) points to the next node after the searched node
 p->next=first;
 first=p;
 return p;
 }
 q=p; // q equals p
 p=p->next; // increment p by one step
 }
 return NULL;
 
}
struct Node * RSearch(struct Node *p,int key)
{
 if(p==NULL)
 return NULL;
 if(key==p->data)
 return p;
 return RSearch(p->next,key);
 
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 create(A,8);
 temp=LSearch(first,8);
 printf("%d",temp->data);
 
 return 0;
}