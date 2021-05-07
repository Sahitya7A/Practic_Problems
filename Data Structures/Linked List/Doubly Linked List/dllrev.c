/*13. Create Doubly linked list to store n integer data elements and display the reversed list

Example: Input the number of nodes:3
Input data for 3 nodes:10 20 30
Data entered in the list:10	20	30
Reverse of the list:30	20	10
*/

#include<stdio.h>
#include<stdlib.h>

     struct node
     {
         int id;
         struct node *next;
         struct node *prev;
     };
 struct node *head=NULL;
 void create(int);
 void display(void);
struct node *p,*q,*temp;
void main()
     {
      int n;
         printf("Input the number of nodes:");
         scanf("%d",&n);
         printf("Input data for %d nodes:",n);
         create(n);
         display();
     }

void create(int n)
{
    int i;
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->id);
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->id);
        temp->next=NULL;
        p->next=temp;
        temp->prev=p;
        p=p->next;
    }
}
void display(void)
{
    p=head;
    printf("Data entered in the list:");
    while(p!=NULL)
    {
        printf("%d\t",p->id);
        q=p;
        p=p->next;
    }
    printf("\nReverse of the list:");
    while(q!=NULL)
    {
        printf("%d\t",q->id);
        q=q->prev;
    }
}











