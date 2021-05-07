/*
create a single linked list with Employee details and find the how many employees have same
designation.

Sample:
Number of employees
3
Employee name
venkat
Employee's designation
asst
Salary of the employee
15000
Age of the employee
21
Employee name
sudha
Employee's designation
manager
Salary of the employee
12000
Age of the employee
24
Employee name
gnanesh
Employee's designation
asst
Salary of the employee
20000
Age of the employee
27
Enter the designation to count
asst
no.of employees with same designation:2

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    char name[20];
    char designation[20];
    float sal;
    int age;
    struct employee *next;
};
struct employee *head=NULL;
void create(int);
void display(void);
struct employee *p,*temp;
int main()
{
    int n;
    printf("Number of employees\n");
    scanf("%d",&n);
    create(n);
    display();
    return 0;
}
void create(int n)
{
    int i;
    if(head==NULL)
    {
        temp=(struct employee*)malloc(sizeof(struct employee));
        printf("Employee name\n");
        scanf("%s",temp->name);
        printf("Employee's designation\n");
        scanf("%s",temp->designation);
        printf("Salary of the employee\n");
        scanf("%f",&temp->sal);
        printf("Age of the employee\n");
        scanf("%d",&temp->age);
        temp->next=NULL;
        head=temp;
        p=head;
    }
    for(i=1;i<n;i++)
    {
        temp=(struct employee*)malloc(sizeof(struct employee));
        printf("Employee name\n");
        scanf("%s",temp->name);
        printf("Employee's designation\n");
        scanf("%s",temp->designation);
        printf("Salary of the employee\n");
        scanf("%f",&temp->sal);
        printf("Age of the employee\n");
        scanf("%d",&temp->age);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
}
void display(void)
{
    int count=0;
    char des[10];
    p=head;
    printf("Enter the designation to count\n");
    scanf("%s",des);
    while(p!=NULL)
    {
        if(strcmp(p->designation,des)==0)
        {
            count++;
        }
        p=p->next;
    }
    printf("no.of employees with same designation:%d",count);
}
