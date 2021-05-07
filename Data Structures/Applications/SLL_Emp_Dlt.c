/*
create a Single Linked list with Employee Details like (name:string,
designation:string,salary:float,age:int) and print the linked list
(insert at begining)


Test Case:
Number of employees
2
Employee name
venkat
Employee's designation
manager
Salary of the employee
25000
Age of the employee
27
Employee name
varma
Employee's designation
director
Salary of the employee
40000
Age of the employee
30
Name of the employee varma
Designation of the employee is director
Salary of the employee is 40000.000000
Age of the employee is 30
Name of the employee venkat
Designation of the employee is manager
Salary of the employee is 25000.000000
Age of the employee is 27
*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[20];
    char designation[30];
    float sal;
    int age;
    struct employee *next;
};
void create(int);
void display(void);
struct employee *head=NULL;
struct employee *p,*temp;
int main()
{
    int n;
    printf("Number of employees");
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
       printf("Name of the employee %s\n",p->name);
        printf("Designation of the employee is %s\n",p->designation);
        printf("Salary of the employee is %f\n",p->sal);
        printf("Age of the employee is %d\n",p->age);
  p=head;
  while(p!=NULL)
  {
       printf("Name of the employee %s\n",p->name);
       printf("Designation of the employee is %s\n",p->designation);
       printf("Salary of the employee is %f\n",p->sal);
       printf("Age of the employee is %d\n",p->age);
     break;
  }
}
