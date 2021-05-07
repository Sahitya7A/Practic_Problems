/* Perform following operations on Hash Table using Quadratic Probing.
     Operations: Insert, Update, Display, Search and Delete

Example 1:
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
402 sam 500
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
502 tina 580
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
302 ritu 380
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 2       student record: 402 sam 500
at index 3       student record: 502 tina 580
at index 6       student record: 302 ritu 380
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
3
Enter key of the student record to search
302
Student record is found at index 6
Student record: 302 ritu 380
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
5

Example2:

Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
 402 sam 500
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
402 sam 600
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 2       student record: 402 sam 600
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
502 tina 580
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
4
Enter key of student to delete
502
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 2       student record: 402 sam 600
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
};

struct hashtab h[SIZE];


void insert()
{
    int i,no,marks,index,key;
    char name[20];
    printf("Enter student record to insert into hash table\n");
    scanf("%d%s%d",&no,name,&marks);
    key=(no)%SIZE;
    for(i=0;i<SIZE;i++)
    {
        index=(no%SIZE+i*i)%SIZE;
        if(h[index].rollno==0||h[index].rollno==no)
        {
            h[index].rollno=no;
            strcpy(h[index].name,name);
            h[index].marks=marks;
            break;
        }
        if(index==SIZE)
        {
            printf("Hash table is full");
        }
    }
}
void search()
{
    int i,key;
    printf("Enter key of the student record to search\n");
    scanf("%d",&key);
    for(i=1;i<=SIZE;i++)
    {
        if(h[i].rollno==key)
        {
           printf("Student record is found at index %d\n",i);
           printf("Student record: %d %s %d\n",h[i].rollno,h[i].name,h[i].marks);
           break;
        }
    }
}
void delete()
{
    int i,key;
    printf("Enter key of student to delete\n");
    scanf("%d",&key);
    for(i=1;i<=SIZE;i++)
    {
        if(h[i].rollno==key)
        {
            h[i].rollno=0;
            break;
        }
    }
}
void display()
{

  int i;

  printf("Records in the hash table are:\n");

  for(i=0;i< SIZE; i++)
  {
if(h[i].rollno!=0)
{
  printf("at index %d \t student record: %d %s %d\n",i,h[i].rollno,h[i].name,h[i].marks);
}
}
}
int main()
{
    int opt,i;
for(i=0;i<SIZE;i++)
h[i].rollno=0;
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
    return 0;
}

