/* Create a linked list to store n student’s details of a class.
Add a student record after the specified number of records
Example:Input the number of students:3
Input 3 students info:1
sam
56.5
2
ram
78.5
4
tina
74.5
Input student details to be added:3
reena
82.5
Enter location:2
Student details:1 sam 56.500000
2 ram 78.500000
3 reena 82.500000
4 tina 74.500000
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
void add(struct student *,int);
 void display(void);
struct student *p;
struct student *temp;
void main()
     {
      int n,loc;
      printf("Input the number of students:");
      scanf("%d",&n);
      printf("Input %d students info:",n);
      create(n);
      printf("Input student details to be added:");
      temp=(struct student*)malloc(sizeof(struct student));
        scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
        temp->next=NULL;

      printf("Enter location:");
      scanf("%d",&loc);
      add(temp,loc);
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
        for(i=1;i<n;i++)
        {
            temp=(struct student*)malloc(sizeof(struct student));
            scanf("%d%s%f",&temp->id,temp->name,&temp->mark);
            temp->next=NULL;
            p->next=temp;
            p=p->next;
        }
    }
}

void add(struct student *temp,int loc)
{
    int i=0;
    p=head;

    for(i=1;i<loc;i++)
    {
         p=p->next;
    }
              temp->next=p->next;
            p->next=temp;
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
