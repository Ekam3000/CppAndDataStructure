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
int count(struct Node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;
 
 if(index < 0 || index > count(p))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 
 if(index == 0)
 {
 t->next=first; // as first is global variable so it can be assessed 
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;  // head pointer (p) aage bharta hua 
 t->next=p->next; // index wale node ko uske next index ka address mil gya 
 p->next=t;  
 
 }
}
int main()
{
 int A[]={10,20,30,40,50};
 create(A,5);
 Insert(first,5,5);
 Display(first);
 return 0;
}