#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *nextptr;
    struct node *preptr;
}*stnode,*ennode,*p,*q;
struct node *head,*tail=NULL,*temp;
struct node* createnode(struct node* h)
{
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    if(h==NULL)
    {
        temp->nextptr=NULL;
        temp->preptr=NULL;
        stnode=temp;
        h=temp;
    }
    else
    {
        temp->nextptr=NULL;
        h->nextptr=temp;
        temp->preptr=h;
        h=h->nextptr;
    }
    return h;
}
void displayFront(struct node* sptr)
{
    sptr=stnode;
    while(sptr!=NULL)
    {
        printf("%d ",sptr->data);
        ennode=sptr;
        sptr=sptr->nextptr;
    }
}
void displayBack(struct node* sptr)
{
    sptr=ennode;
    while(sptr!=NULL)
    {
        printf("%d ",sptr->data);
        sptr=sptr->preptr;
    }
}
struct node* DlListDeleteAnyNode(int k)
{
    p=stnode;
    while(p!=NULL)
    {
        if(p->data==k)
        {
            if(p==stnode)
            {
                stnode=p->nextptr;
              //  free(stnode);
               // return NULL;
            }
            else
            {
                p->preptr->nextptr=p->nextptr;
                if(p->nextptr!=NULL)
                {
                    p->nextptr->preptr=p->preptr;
                }
            }
            free(p);
            return;// NULL;
        }
        p=p->nextptr;
    }
}
int main()
{
    int i,n,k;
    printf("Enter No.of employees\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        head=createnode(head);
    }
    printf("Displaying Contents From Front\n");
    displayFront(head);
    printf("\nDisplaying Contents From Back\n");
    displayBack(head);
    printf("enter name of emp to delete\n");
    scanf("%d",&k);
    head=DlListDeleteAnyNode(k);
//    D1ListDeleteAnyNode(k);
    if(head!=NULL)
    {
    printf("after delete\n");
    displayFront(head);
    displayBack(head);
    }
    return 0;
}
