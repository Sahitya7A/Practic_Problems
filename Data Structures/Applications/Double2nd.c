/*
    write c program to create a double linked list with employee details, and
    delete a node based on employee name and display from head node and display
    from tail(observe test cases)

    Note: if employee name is not in the list print "Name is not in the list "

Test case=1
Enter No.of employees
3
Enter employee name designation salary and age
gopal asst 2000 20
Enter employee name designation salary and age
mahesh manager 2400 23
Enter employee name designation salary and age
suresh worker 1000 21
before delete
Display from head
suresh worker 1000.000000 21
mahesh manager 2400.000000 23
gopal asst 2000.000000 20
Display from tail
gopal asst 2000.000000 20
mahesh manager 2400.000000 23
suresh worker 1000.000000 21
enter name of emp to delete
mahesh
after delete
Display from head
suresh worker 1000.000000 21
gopal asst 2000.000000 20
Display from tail
gopal asst 2000.000000 20
suresh worker 1000.000000 21

Test case=2
Enter No.of employees
2
Enter employee name designation salary and age
pawan asst 1200 21
Enter employee name designation salary and age
varma manager 3000 28
before delete
Display from head
varma manager 3000.000000 28
pawan asst 1200.000000 21
Display from tail
pawan asst 1200.000000 21
varma manager 3000.000000 28
enter name of emp to delete
venkat
Name is not in the list
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
char name[10],des[10];
int age;
float salary;
struct node* preptr;
struct node* nextptr;
}*stnode, *ennode,*p;
struct node *head=NULL,*tail=NULL;
//struct node* createnode(struct node* );
void createnode(int );
//void display(struct node*);
void display();
//struct node* DlListDeleteAnyNode(char ename[]);
void DlListDeleteAnyNode(char ename[]);
void displayFront();
void displayBack();
int main()
{
int b,i,n;
char ename[10];
printf("Enter No.of employees\n");
scanf("%d",&n);
createnode(n);
  /* for(i=1;i<=n;i++)
   {
   head=createnode(head);
   }*/
/*printf("before delete\n");
void displayFront(struct node*);
void displayBack(struct node*);*/
void displayFront( );
void displayBack( );
printf("enter name of emp to delete\n");
    scanf("%s", ename);
    //hea=
    DlListDeleteAnyNode(ename);
  //  if(head!=NULL)
    //{
    printf("after delete\n");
    /*void displayFront(struct node* stnode);
    void displayBack(struct node* p);*/
    void displayFront( );
void displayBack( );
    }
}
void createnode(int n)
{
    int i=0;

struct node *temp;
if(head==NULL)
{
    printf("Enter employee name designation salary and age\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%s%s%f%d",&temp->name,&temp->des,&temp->salary,&temp->age);
    temp->preptr=NULL;
    temp->nextptr=NULL;
    head=temp;
    p=head;
 //   i=1;
   // return h;
}
else
{
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%s%s%f%d",&temp->name,&temp->des,&temp->salary,&temp->age);
    temp->nextptr=NULL;
    temp->preptr=p;
    p->nextptr=temp;
    p=p->nextptr;
   // return h;
}
//stnode=head;
//p=head;
}
void DlListDeleteAnyNode(char ename[])
{
    struct node *prev;
    p=head;
    stnode=p;//head;
    while(stnode!=NULL)
    {
        if(stnode->name==ename)
        {
            if(stnode==head)
            {
                head=stnode->nextptr;
                free(stnode);
            }
            else
            {
                prev->nextptr=stnode->nextptr;
                if(stnode->nextptr!=NULL)
                {
                    stnode->nextptr->preptr=prev;
                }
                free(stnode);
                prev=stnode->nextptr;
            }
        }
        else
        {
            stnode=stnode->nextptr;
        }
    }
}
void displayFront()
{
    sptr=head;
    printf("Display from head\n");
while(sptr!=NULL)
{
    printf("%s %s %f %d\n",sptr->name,sptr->des,sptr->salary,sptr->age);
    p=sptr;
    sptr=sptr->nextptr;
}
}
void displayBack(struct node* sptr)
{
    while(p->next!=NULL)
    sptr=tail;
    printf("Display from tail\n");
while(sptr!=NULL)
{
    printf("%s %s %f %d\n",sptr->name,sptr->des,sptr->salary,sptr->age);
    sptr=sptr->preptr;
}
}
