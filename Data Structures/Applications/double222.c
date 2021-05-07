#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
char name[10];
char des[10];
int age;
float salary;
struct node* preptr;
struct node* nextptr;
}*stnode, *ennode,*p,*q;
struct node *head,*tail=NULL,*temp;
struct node* createnode(struct node* h)
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter employee name designation salary and age\n");
    scanf("%s%s%f%d",temp->name,temp->des,&temp->salary,&temp->age);
    if(h==NULL)
    {
        temp->nextptr=NULL;
        temp->preptr=NULL;
        h=temp;
        stnode=h;
    }
    else
    {
        h->nextptr=temp;
        temp->nextptr=NULL;
        temp->preptr=h;
        h=h->nextptr;
    }
    return h;
}
void displayFront(struct node* sptr)
{
    sptr=ennode;
    while(sptr!=NULL)
    {
        printf("%s %s %f %d\n",sptr->name,sptr->des,sptr->salary,sptr->age);
        sptr=sptr->preptr;
    }
}
void displayBack(struct node* sptr)
{
    sptr=stnode;
    while(sptr!=NULL)
    {
        printf("%s %s %f %d\n",sptr->name,sptr->des,sptr->salary,sptr->age);
        ennode=sptr;
        sptr=sptr->nextptr;
    }
}
struct node* DlListDeleteAnyNode(char ename[])
{
    p=stnode;
    while(p!=NULL)
    {
        if(p->name==ename)
        {
            if(p==stnode)
            {
                stnode=p->nextptr;
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
            return;
        }
        p=p->nextptr;
    }
}
int main()
{
int b,i,n;
char ename[10];
printf("Enter No.of employees\n");
scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   head=createnode(head);
//   if(i==1)
//   {
//       ennode=head;
//   }
//   else if(i==n)
//   {
//       stnode=head;
//   }
   }
printf("before delete\n");
printf("Displaying Contents From Front\n");
displayFront(head);
printf("\nDisplaying Contents From Back\n");
displayBack(head);
printf("enter name of emp to delete\n");
    scanf("%s", ename);
    head=DlListDeleteAnyNode(ename);
    if(head!=NULL)
    {
    printf("after delete\n");
    printf("Displaying Contents From Front\n");
    displayFront(head);
    printf("\nDisplaying Contents From Back\n");
    displayBack(head);
    }
    return 0;
}
