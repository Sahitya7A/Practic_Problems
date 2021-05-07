/*11. Create Circular Linked List to store n student’s details of a class. Add student record at the a) beginning b) ending c) after a given node and display the list of records.
Example: Input the number of students:2
Input 2 students info:2 sam 45
3 rita 67
Input student details to be inserted first:1 rohan 78
Input student details to be inserted last:5 geeta 42
Input student details to be inserted after given location:4 dina 62
Enter location:3
Student details:1 rohan 78.000000
2 sam 45.000000
3 rita 67.000000
4 dina 62.000000
5 geeta 42.000000 */

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
void addfirst(void);
void addlast(void);
void addafter(void);
 void display(void);
struct student *p;
void main()
     {
         int n;
         printf("Input the number of students:");
         scanf("%d",&n);
         printf("Input %d students info:",n);
         create(n);
         printf("Input student details to be inserted first:");
         addfirst();
         printf("Input student details to be inserted last:");
         addlast();
         printf("Input student details to be inserted after given location:");
         addafter();
         printf("Student details:");
         display();
     }
void create(int n)
{
    struct student *temp;
    int i;
    if(head==NULL)
    {
        temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
       temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->rollno,temp->name,&temp->marksper);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
    last=p;
    last->next=head;
}
void addfirst()
{
    struct student *temp;
    temp=(struct student*)malloc(sizeof(struct student));
    scanf("%d%s%f",&temp->rollno,temp->name,&temp->marksper);
    temp->next=head;
    head=temp;
    last->next=temp;
}
void addlast()
{
    struct student *temp;
    temp=(struct student*)malloc(sizeof(struct student));
    scanf("%d%s%f",&temp->rollno,temp->name,&temp->marksper);
   // temp->next=
    last->next=temp;
    temp->next=head;
    last=temp;
}
void addafter()
{
    struct student *temp;
    int a,i=0;
    p=head;
    temp=(struct student*)malloc(sizeof(struct student));
    scanf("%d%s%f",&temp->rollno,temp->name,&temp->marksper);
    printf("Enter location:");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;

}

void display(void)
{
    p=head;
    do
    {
        printf("%d %s %f\n",p->rollno,p->name,p->marksper);
        p=p->next;
    }
    while(p!=head);
}
