/*2.  Create a linked list to store n student’s marks and display the total of marks list
Example:
Input the number of students:3
Input marks for 3 students:90
80
90
Total marks:260
*/
#include<stdio.h>
#include<stdlib.h>

     struct markslist
     {
         int mark;
         struct markslist *next;
     };

 struct markslist *head=NULL;
 struct markslist *p;
 void create(int);
 int addmarks(void);

void main()
     {
         int n,t;
         printf("Input the number of students:");
         scanf("%d",&n);
         printf("Input marks for 3 students:");
         create(n);
         t=addmarks();
          printf("Total marks: %d",t);
     }

void create(int n)
{
    struct markslist *temp;
    int i;
    if(head==NULL)
    {
        temp=(struct markslist*)malloc(sizeof(struct markslist));
        scanf("%d",&temp->mark);
        temp->next=NULL;
        head=temp;
        p=head;
        for(i=1;i<n;i++)
        {
        temp=(struct markslist*)malloc(sizeof(struct markslist));
        scanf("%d",&temp->mark);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
        }
    }

 }

int addmarks(void)
{
    int t=0;
    p=head;
    while(p!=NULL)
    {
       t=t+p->mark;
       p=p->next;
    }
return t;
 }
