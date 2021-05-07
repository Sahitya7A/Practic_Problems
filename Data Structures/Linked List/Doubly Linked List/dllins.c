/*14. Create Double Linked List to store n student’s details of a class.
Add a student record after the specified no. of records  and
display the list of records.
Note: To add record at the beginning specify no. of records=0
Example:
Input the number of students:3
Input 3 students info:1 sam 45
2 ram 67
4 ritu 89
Input student details to be inserted:3 sita 90
Input position:2
Student details:1 sam 45.000000
2 ram 67.000000
3 sita 90.000000
4 ritu 89.000000
*/


#include<stdio.h>
#include<stdlib.h>

     struct student
     {
        int id;
        char name[20];
        float mark;
        struct student *next;
        struct student *prev;
     };
 struct student *head=NULL;
 void create(int);
void add(void);
void display(void);
struct student *p,*q,*temp;
void main()
     {
      int n;
      printf("Input the number of students:");
      scanf("%d",&n);
      printf("Input %d students info:",n);
      create(n);
      printf("Input student details to be inserted:");
      add();
      printf("Student details:");
      display();
     }
void create(int n)
{
    int i;
    if(head==NULL)
    {
        temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;
        p->next=temp;
        temp->prev=p;
        p=p->next;
    }
}
void add()
{
    int i=0,a;
    temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;
        temp->prev=NULL;
    p=head;
    printf("Input position:");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        p=p->next;
        if(a==0)
        {
            temp->next=head;
            temp->prev=NULL;
            head->prev=temp;
            head=temp;
        }
        else
        {
            temp->next=p->next;
            temp->prev=p;



            if(p->next!=NULL)
            {
               // temp->next->prev=p->next;
                //temp->prev->next=p->prev;
                p->next->prev=temp;
                p->next=temp;
            }

        }
    }

}

void display(void)
{
struct student *q;

p=head;
printf("Student details:");
     while(p!=NULL)
       {
           printf("%d %s %f\n",p->id,p->name,p->mark);
           p=p->next;
       }

}
