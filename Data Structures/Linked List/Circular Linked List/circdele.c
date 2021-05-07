/*12. Create Circular Linked List to store n student’s details of a class. Delete a student record for the given rollno  and display the list of records.
Example: Input the number of students:4
Input 4 students info:1 sam 56
2 geeta 67
3 ritu 89
4 ram 85
Enter rollno of student record to be deleted:3
Student details:1 sam 56.000000
2 geeta 67.000000
4 ram 85.000000*/

#include<stdio.h>
#include<stdlib.h>

     struct student
     {
         int rollno;
         char name[30];
         float marksper;
         struct student *next;
     };

 struct student *head=NULL,*last=NULL;
 void create(int);
void delete(int);
void display(void);
struct student *prev=NULL;
void main()
     {
      int n,rn;

      printf("Input the number of students:");
      scanf("%d",&n);
      printf("Input %d students info:",n);
      create(n);
      printf("Enter rollno of student record to be deleted:");
scanf("%d",&rn);
delete(rn);
 display();

     }
void create(int n)
{ int i;
  struct student *temp,*q;
 printf("Input %d students info:",n);
 if (head==NULL)
    {
        temp=(struct student *) malloc(sizeof(struct student));

        scanf("%d %s %f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        head=temp;
        q=head;

    }
 for(i=1;i<n;i++)
    {
     temp=(struct student *) malloc(sizeof(struct student));

        scanf("%d %s %f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        q->next=temp;
        q=q->next;
    }
last=q;
last->next=head;


}

void delete(int rn)
{
    struct student *q;
    while(q!=NULL)
    {
        if(q->rollno==rn)
        {
            if(q==head)
            {
                head=q->next;
            }
            else
            {
                prev->next=q->next;
            }
        free(q);
        return;
        }
         prev=q;
    q=q->next;
    }

}


void display(void)
{
struct student *q;

q=head;
printf("Student details:");

       do{
           printf("%d %s %f\n",q->rollno,q->name,q->marksper);
           q=q->next;
       }
      while(q!=head);
 }
