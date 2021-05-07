/*6.  Create a linked list to store n student’s information and display the student information sorted by markspercentage

Note: 	student information - name:string, marks:float


Example: Input the number of students:3
Input 3 students info:sam 78.0
ram 90.0
bob 85.0
Student details:ram 90.000000	bob 85.000000	sam 78.000000	*/

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
struct student *p,*temp,*temp1;
void main()
     {
         int n;
         printf("Input the number of students:");
         scanf("%d",&n);
         printf("Input %d students info:",n);
         create(n);
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

