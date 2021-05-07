/*printing alternate nodes in the list


Enter  the number of nodes:3
Input data for 3 nodes:10
Input data for 3 nodes:20
Input data for 3 nodes:30
Data entered in the list:10     20      30
alternate nodes in the list :10 30

*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id;
    struct node *next;
};
struct node *head=NULL;
void create(int);
void display(void);
void print_alternatenodes(struct node *);
struct node *p,*temp;
int main()
{
    int n,i;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    create(n);
    }
    display();
    printf("\n");
    printf("alternate nodes in the list :");
    print_alternatenodes(head);
    return 0;
}
void create(int n)
{
    int i;
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->id);
        temp->next=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->id);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
}
void display(void)
{
    p=head;
    printf("Data entered in the list:");
    do
    {
        printf("%d\t",p->id);
        p=p->next;
    }while(p!=NULL);
    //}
    //
}
void print_alternate(struct node *head)
{
    int count=0;
    printf("alternate nodes in the list :");
    while(head!=NULL)
    {
        if(count%2==0)
        printf("%d\t",head->id);
        head=head->next;
    }
}
