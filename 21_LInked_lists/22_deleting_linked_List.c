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
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);
 
 }
}
int Delete(struct Node *p,int index)
{
 struct Node *q=NULL;
 int x=-1,i;
 
 if(index < 1 || index > count(p))
 return -1;
 if(index==1) // index value starts from 1.
 {
 q=first; //  pointing q to first 
 x=first->data; // storing value of q in some varible x
 first=first->next; // shifting first to next node so that it points to next node
 free(q);
 return x;
 }
 else
 {
 for(i=0;i<index-1;i++)
 {
 q=p;
 p=p->next;
 }
 // is loop ke end hote takk p , deleting node ko point kar raha hai
 q->next=p->next;
 x=p->data;
 free(p);
 return x;
 
 }
 
}
int main()
{
 
 int A[]={10,20,30,40,50};
 create(A,5);
 
 printf("%d\n",Delete(first,2));
 Display(first);
 
 return 0;
 }  // index value starts from 1.