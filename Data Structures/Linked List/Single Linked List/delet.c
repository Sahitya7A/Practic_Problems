/*9. Create a linked list to store n student’s details of a class and then delete a student record who has failed due to lack of credits from the existing list
Input the number of students:3
Input 3 students info:1 sam 56
2 ram 67
3 tina 78
Enter rollno of student record to be deleted:2
Student details:1 sam 56.000000
3 tina 78.000000
*/

#include<stdio.h>
#include<stdlib.h>

     struct student
     {
         int rollno;
         char name[30];
         float marksper;
         struct student *next;
     };

 struct student *head=NULL;
 void create(int);
void delete(int);
 void display(void);
struct student *temp,*q;
struct student *prev=NULL;
void main()
     {
      int n,rn;
     // struct student *temp;
      printf("Input the number of students:");
      scanf("%d",&n);
      create(n);
printf("Enter rollno of student record to be deleted:");
scanf("%d",&rn);
delete(rn);
 display();

     }
void create(int n)
{
    int i;
  //struct student *temp,*q;
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
 }

void delete(int rn)
{
    q=head;
    while(q!=NULL)
    {
            if(q->rollno==rn)
    {
        if(q==head)
            head=q->next;
        else
            prev->next=q->next;
    free(q);
    return;
    }
    prev=q;
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

