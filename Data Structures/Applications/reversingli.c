/* Write a program in C to create a singly linked list of n nodes and display it in reverse order.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :
 Data entered in the list are :
 Data = 5
 Data = 6
 Data = 7

 The list in reverse are :
 Data = 7
 Data = 6
 Data = 5
 sample testcase:
input=3
5
6
7
output=
5
6
7
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id;
    struct node *next;
};
void create(int);
void display(void);
void display1(void);
struct node *head=NULL;
struct node *p,*q,*temp;
int main()
{
    int n;
    printf("Input the number of nodes :");
    scanf("%d",&n);
    create(n);
    printf("Expected Output :\n");
    printf("Data entered in the list are :");
    display();
        printf("\n");
    printf("The list in reverse are :");
    display1();
}
void create(int n)
{
    int i=0;
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Input data for node %d : ",i+1);
        scanf("%d",&temp->id);
        temp->next=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Input data for node %d : ",i+1);
        scanf("%d",&temp->id);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
    q=p;
}
void display(void)
{
    p=head;
    while(p!=NULL)
    {
        printf("\n");
        printf("Data = ");
        printf("%d",p->id);
        p=p->next;
    }
}
void display1(void)
{
   // p=head;
    do
    {
        printf("\n");
        printf("Data = ");
        printf("%d",q->id);
        q=q->next;
    }while(q==head);
}
