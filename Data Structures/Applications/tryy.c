/*15. Create Double Linked List to store n student’s details of a class. Delete a student record for the specified rollno and display the list of records.

Input the number of students:3
Input 3 students info:1 sam 45
2 ritu 67
3 tina 89
Input rollno of the student record to be deleted:3
Student details:1 sam 45.000000
2 ritu 67.000000*/



#include<stdio.h>
#include<stdlib.h>

     struct student
     {
         int rollno;
         char name[30];
         float marksper;
         struct student *prev;
         struct student *next;
     };

 struct student *head=NULL;
 void create(int);
void add(void);
void delete(void);
void display(void);
struct student *temp,*q;
void main()
     {
      int n;

      printf("Input the number of students:");
      scanf("%d",&n);
create(n);

delete();
display();

     }
void create(int n)
{ int i;

 printf("Input %d students info:",n);
 if (head==NULL)
    {
        temp=(struct student *) malloc(sizeof(struct student));

        scanf("%d %s %f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        q=head;

    }
 for(i=1;i<n;i++)
    {
     temp=(struct student *) malloc(sizeof(struct student));

        scanf("%d %s %f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        q->next=temp;
        temp->prev=q;
        q=q->next;
    }
}

void delete()
{
    int a;
    printf("Input rollno of the student record to be deleted:");
    scanf("%d",&a);
    q=head;
    while(q!=NULL)
    {
        if(q->rollno==a)
        {
            if(q==head)
            {
                head=q->next;
            }
            else
            {
                q->prev->next=q->next;
                q->next->prev=q->prev;
                q->next=NULL;
                q->prev=NULL;
            }
        }
        q=q->next;
    }
}

void display(void)
{
//struct student *q;

q=head;
printf("Student details:");
     while(q!=NULL)
       {
           printf("%d %s %f\n",q->rollno,q->name,q->marksper);
           q=q->next;
       }

}
















