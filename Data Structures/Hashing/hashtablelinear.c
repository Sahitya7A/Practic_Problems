#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
struct hastab
{
    int rollno;
    char name[30];
    int marks;
};
struct hastab h[SIZE];
void insert()
{
    int id,marks,index,i;
    char name[20];
    printf("Enter elements to be inserted ");
    scanf("%d%s%d",&id,name,&marks);
    index=id%SIZE;
    for(i=0;i<SIZE;i++)
    {
        index1=(index+i)%SIZE;
        if()
    }
}
void search()
{
int g;
}
void delete()
{
int y;
}
void display()
{
int index,i;
    printf("Records in the hash table are:\n");
    for(i=1;i<=SIZE;i++)
    {
        if(h[i].rollno!=0)
        {
    printf("at index %d       student record: %d %s %d\n",i,h[i].rollno,h[i].name,h[i].marks);
        }
    }
}
int main()
{
    int i,opt;
    for(i=0;i<SIZE;i++)
    {
        h[i].rollno=0;
        while(1)
        {
        printf("Press 1.Insert 2.Display 3.Search 4.Delete 5.Exit\n");
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
}
