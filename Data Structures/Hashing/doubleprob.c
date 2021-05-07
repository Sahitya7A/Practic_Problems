/* Perform following operations on Hash Table using Double Hashing Technique.
     Operations: Insert, Update, Display, Search and Delete

Example 1:
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
18 ram 560
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
1
Enter student record to insert into hash table
44 sam 450
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
2
Records in the hash table are:
at index 5       student record: 18 ram 560
at index 10      student record: 44 sam 450

Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
3
Enter key of the student record to search
44
Student record is found at index 10
Student record: 44 sam 450
Press 1. Insert  2. Display     3. Search       4.Delete        5.Exit
5


*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 13

struct hashtab
{int rollno;
char name[25];
int marks;
};

struct hashtab h[SIZE];


void insert()
{
    int index,i,no,marks,h1,h2;
    char name[20];
    printf("Enter student record to insert into hash table\n");
    scanf("%d%s%d",&no,name,&marks);
    h1=(no)%SIZE;
    h2=7-(no%7);
    for(i=0;i<SIZE;i++)
    {
        index=(h1 + i*h2)%SIZE;
        if(h[index].rollno==0)
        {
            h[index].rollno=no;
            strcpy(h[index].name,name);
            h[index].marks=marks;
            break;
        }
        if(h1==SIZE)
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
    printf("Enter key of the student to delete\n");
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
if(h[i].rollno!=0)
  printf("at index %d \t student record: %d %s %d\n",i,h[i].rollno,h[i].name,h[i].marks);

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
}

