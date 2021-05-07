/*4. Create a linked list to store n student’s details in a class and then add a readmitted student record at the beginning of the existing list
Example:
Input the number of students:2
Input 2 students info:1
sam
68.5
2
ram
78.5
Input readmitted student details:111
tina
56.0
Student details:111 tina 56.000000
1 sam 68.500000
2 ram 78.500000
*/
#include<stdio.h>
#include<stdlib.h>

     struct student
     {
        int id;
        char name[20];
        float mark;
        struct student *next;
     };

 struct student *head=NULL;
 void create(int);
void add(struct student *);
 void display(void);
struct student *p;
struct student *temp;
void main()
     {
      int n;
      //struct student *temp;
      printf("Input the number of students:");
      scanf("%d",&n);
      printf("Input %d students info:",n);
      create(n);
      printf("Input readmitted student details:");
      add(temp);
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
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
}

void add(struct student *temp)
{
    temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;
    temp->next=head;
    head=temp;
}
void display(void)
{
    p=head;
    while(p!=NULL)
    {
        printf("%d\t%s\t%f\n",p->id,p->name,p->mark);
        p=p->next;
    }
}


