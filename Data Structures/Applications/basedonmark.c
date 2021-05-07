#include<stdio.h>
#include<stdlib.h>
#include<string.h>

     struct student
     {
         char name[20];
         float marksper;
         struct student *next;
     };

 struct student *head=NULL;
 void create(int);
 void sort(int);
 void display(void);
 void add();
struct student *p,*temp,*temp1;
void main()
     {
         int n;
         printf("Input the number of students:");
         scanf("%d",&n);
         printf("Input %d students info:",n);
         create(n);
       add();
     n++;
         sort(n);
         printf("Student details:");
         display();
     }

void create(int n)
{
    int i;
    if(head==NULL)
    {
        temp=(struct student*)malloc(sizeof(struct student));
        scanf("%s%f",temp->name,&temp->marksper);
        temp->next=NULL;
        head=temp;
        p=head;
        for(i=1;i<n;i++)
        {
            temp=(struct student*)malloc(sizeof(struct student));
            scanf("%s%f",temp->name,&temp->marksper);
            temp->next=NULL;
            p->next=temp;
            p=p->next;
        }
    }
}

void display(void)
{
    p=head;

    while(p!=NULL)
    {
        printf("%s\t%f\n",p->name,p->marksper);
       p=p->next;
    }
}

void sort(int n)
{
struct student *h,*p;
  int i;
   p=head;
   temp1=(struct student*)malloc(sizeof(struct student));
    for(i=0;i<n;i++)
    {
        h=p->next;
    while(h!=NULL)
    {
    if(p->marksper < h->marksper)
    {
        temp1->marksper=p->marksper;
        strcpy(temp1->name,p->name);
        p->marksper=h->marksper;
        strcpy(p->name,h->name);
        h->marksper=temp1->marksper;
        strcpy(h->name,temp1->name);

    }
    else
    {
       h=h->next;
    }
    }
    p=p->next;
    }
}
void add()
{
  //  struct *temp,*q;
//printf("")
    temp=(struct student*)malloc(sizeof(struct student));
    scanf("%s%f",temp->name,&temp->marksper);
    temp->next=NULL;
    p->next=temp;
    temp=p;
}
/* Create a linked list to store n student’s details of class-G and
then sort student records by their markspercentage.
A student has transferred from other class to class-G
so add the record at the correct position based on his/her performance.
Example:
Input the number of students:3
Input 3 students info:tina 67
sita 72
sam 56
Input transfered student details:ritu 70
Student details:sita 72.000000	ritu 70.000000		tina 67.000000	sam 56.000000


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

     struct student
     {

         char name[30];
         float marksper;
         struct student *next;
     };

 struct student *head=NULL;
 void create(int);
 void sort(int);
 int findloc(int);
 void add(struct student *,int);
 void display(void);

void main()
     {struct student *temp;
      int n,loc,mk;

         create(n);
         sort(n);
        printf("Input transfered student details:");
        temp=(struct student *) malloc(sizeof(struct student));
        scanf("%s %f",temp->name,&temp->marksper);
        temp->next=NULL;

         loc=findloc(temp->marksper);
         add(temp,loc);
         display();

     }

void create(int n)
{ int i;
  struct student *temp,*q;
 printf("Input %d students info:",n);
 if (head==NULL)
    {
        temp=(struct student *) malloc(sizeof(struct student));

        scanf("%s %f",temp->name,&temp->marksper);
        temp->next=NULL;
        head=temp;
        q=head;

    }
 for(i=1;i<n;i++)
    {
     temp=(struct student *) malloc(sizeof(struct student));

        scanf("%s %f",temp->name,&temp->marksper);
        temp->next=NULL;
        q->next=temp;
        q=q->next;
    }
 }

void display(void)
{
struct student *q;

q=head;
printf("Student details:");
       while(q!=NULL)
       {
           printf("%s %f\t",q->name,q->marksper);
           q=q->next;
       }
 }

void sort(int n)
{

}


void add(struct student *temp,int loc)
{
}

int findloc(int mk)
{


}
*/
