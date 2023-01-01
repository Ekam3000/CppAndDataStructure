#include <stdio.h>
#include<stdlib.h>
struct Node
{
 struct Node *prev;
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 struct Node *t,*last;
 int i;
 
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->prev=first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=last->next; // every time t->next me NUll place hota jaye ga
 t->prev=last; // for the first time t-> previous me head ka address place ho jaye ga
 last->next=t; // for the first time head->next pointing to newly built 't'
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p)
 {
 printf("%d ",p->data);
 p=p->next; // every time p ko next node ka address milta jaye ga
 }
 printf("\n");
}
int Length(struct Node *p)
{
 int len=0;
 
 while(p)
 {
 len++;
 p=p->next;
 }
 return len;
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;
 
 if(index < 0 || index > Length(p))
 return;
 if(index==0)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 t->prev=NULL;
 t->next=first;
 first->prev=t;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 
 t->prev=p;
 t->next=p->next;
 if(p->next)p->next->prev=t; // if p->next null nahi hai then node next to 't' (indicated by p->next) uska prev 't' ko point karna chahiye
 p->next=t; 
 
 }
}
int Delete(struct Node *p,int index)
{
 //struct Node *q;
 int x=-1,i;
 
 if(index < 1 || index > Length(p))
 return -1;
 
 if(index==1)
 {
 first=first->next; // first goes to next node
 if(first)first->prev=NULL; // if first is is the only node then first=first->next will be a NULL , then first->prev=NULL likhne ka koi faida nii
 
 x=p->data;
 free(p);
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 p->prev->next=p->next; //here p pointing to deleting node
 if(p->next) // if p->next is not nULL
 p->next->prev=p->prev;
 x=p->data;
 free(p);
 }
 return x;
 
}
void Reverse(struct Node *p)
{
 struct Node *temp;
 
 while(p!=NULL)
 {
     // the below three lines are just like swapping of two variables
 temp=p->next;
 p->next=p->prev;
 p->prev=temp;
 p=p->prev; // moving p to next node 
 if(p!=NULL && p->next==NULL) // when we see first time our last node
 first=p; // in this ways first points to last node and output starts printing from last node
 }
}
int main()
{
 int A[]={10,20,30,40,50};
 create(A,5);
 
 Reverse(first);
 
 Display(first);
 return 0;
}
