#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
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
void SortedInsert(struct Node *p,int x)
{
 struct Node *t,*q=NULL; 
 
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=x;
 t->next=NULL;

 if(first==NULL) // for the case when linked list me koi bhi element nahi hai
 first=t;
 else
 {
 while(p && p->data<x)
 {
 q=p; // q following p
 p=p->next;
 }
 if(p==first) // if element given is smaller first node
 {
 t->next=first;
 first=t;
 }
 else
 {
 t->next=q->next; // t ko chahiye q ke next ka address so that it can points to its next node(next to t)
 q->next=t;
 }
 }
 // ye kaam ek p node pointer se bhi ho sakta tha as done in 'insert_LL' but yaha q ne p jaisa kaam kiya 
}
int main()
{
 //i. do this 
 //int A[]={10,20,30,40,50};
 //create(A,5);
 //SortedInsert(first,15); 
  //Display(first);
 // 2nd do this
SortedInsert(first,15); 
SortedInsert(first,25); 
 Display(first);
 return 0;
}