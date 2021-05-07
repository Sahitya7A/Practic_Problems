/* Perform following operations on Hash Table using Separate Chaining.
   Operations: Insert, Display, Search and Delete
Example:
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
504 sam 560
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
304 sita 450
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 4       student record: 504 sam 560
at index 4       student record: 304 sita 450
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
3
Enter key of the student record to search
304
search element found at index 4
304 sita 450
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
4
Enter key of student to delete
304
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 4       student record: 504 sam 560
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
5
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10

struct hashtab
{int rollno;
char name[25];
int marks;
struct hashtab *next;
};

struct hashtab *head[SIZE]={NULL},*p,*temp,*q,*prev;

void insert()
{
    int id,marks,index;
    char nae[20];
    temp=(struct hashtab*)malloc(sizeof(struct hashtab));
    printf("Enter student record to insert into hash table\n");
    scanf("%d%s%d",&temp->rollno,temp->name,&temp->marks);
    temp->next=NULL;
    index=temp->rollno%SIZE;
    if(head[index]==NULL)
    {
        head[index]=temp;
    }
    else
    {
        q=head[index];
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
    }
}
void search()
{
    int index,i,no;
    //temp=(struct hashtab*)malloc(sizeof(struct hashtab));

    printf("Enter key of the student record to search\n");
    scanf("%d",&no);
    index=no%SIZE;
    if(head[index]==NULL)
    {
        printf("Search Element not found\n");
    }
    else
    {
      for(p=head[index];p!=NULL;p=p->next)
      {
          if(p->rollno==no)
          {
              printf("search element found at index %d\n",index);
              printf("%d %s %d\n",p->rollno,p->name,p->marks);
              break;
          }
      }
    }
                  //  printf("search element found at index %d\n",index);
}
void delete()
{
    int index,no;
    printf("Enter key of student to delete\n");
    scanf("%d",&no);
    index=no%SIZE;
    if(head[index]==NULL)
    {
        printf("Hashtable is empty");
    }
    else
    {
        for(p=head[index];p!=NULL;prev=p,p=p->next)
        {
            if(p->rollno==no)
            {
                if(p==head[index])
                {
                    head[index]=p->next;
                }
                else
                {
                    prev->next=p->next;
                }
                free(p);
                break;
            }
            if(p==NULL)
            {
                printf("Element not found");
            }
        }
    }
}




void display()
{

  int i;

  printf("Records in the hash table are:\n");

  for(i=0;i< SIZE; i++)
    if(head[i]!=NULL)
      for(p=head[i];p!=NULL;p=p->next)
        printf("at index %d \t student record: %d %s %d\n",i,p->rollno,p->name,p->marks);

}
int main()
{
    int opt,i;

    while(1)
    {
        printf("Press 1. Insert\t 2. Display \t3. Search \t4.Delete \t5.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
               delete();
               break;
            case 5:exit(0);
        }
    }
}
