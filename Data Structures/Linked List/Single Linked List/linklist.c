/*1. Write a C program to create a single linked list to store n integer data elements and display them

Example:
Input the number of nodes:3
Input data for 3 nodes:10 20 30
Data entered in the list:10 20	30
 */

#include<stdio.h>
#include<stdlib.h>

     struct node
     {
        int data;
        struct node *next;
     };

 struct node *head=NULL;
 void create(int);
 void display(void);
 struct node *p;
void main()
     {
         //struct node *p;
         int n;
         printf("Input the number of nodes:");
         scanf("%d",&n);
         printf("Input data for %d nodes:",n);
         create(n);
         printf("Data entered in the list:");
         display();
     }

void create(int n)
{
    int i;
    //struct node *temp,*p;
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
       //temp->data=d;
        temp->next=NULL;
        head=temp;
        p=head;
        //p=p->next;
        for(i=1;i<n;i++)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            temp->next=NULL;
            p->next=temp;
            p=p->next;
        }
    }
}

void display(void)
{
    /*int i;int
    for(i=0;i<n;i++)
    {
        printf("%d\t",p->data);
        p=p->next;
    }*/
    //struct node *temp,*p;
    p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}
