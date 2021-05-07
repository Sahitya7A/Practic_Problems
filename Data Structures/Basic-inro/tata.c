/* Tata Motors organization has various branches located in different cities.
Organization Manager wants to find out the employee details
who is drawing the highest salary in Hydrabad office.

Note: Employee structure members: Eno,Name,Salary,Address
Address structure members: City,State

sample output:

How many employee info you want to accept : 3
-----------------------------
Enter details for 3employees:
-----------------------------

Employee Number: 1
Name           : sam
Salary         : 6000
city           :Vijayawada
State          :AP
-----------------------------
Employee Number: 2
Name           : ram
Salary         : 6000
city           :Hyderabad
State          :TS
-----------------------------
Employee Number: 3
Name           : rita
Salary         : 5000
city           :Hyderabad
State          :TS

-----------------------------
Highest salary employee details:
-----------------------------
EMPNO    NAME  SALARY   CITY    STATE

 2      ram     6000    Hyderabad   TS
*/

#include<stdio.h>
#include<string.h>
struct Address
{
    char City[20];
    char Addres[2];
};
struct Employee
{
    int Eno;
    char Name[20];
    int Salary;
    struct Address add;
};
void main()
{
    struct Employee emp[10];
    int i,n,high,p;
    printf("How many employee info you want to accept : ");
    scanf("%d",&n);
    printf("Enter details for %d employees: \n",n);
    for(i=0;i<n;i++)
    {
       printf("Employee Number: ");
       scanf("%d",&emp[i].Eno);
       printf("Name           : ");
       scanf("%s",emp[i].Name);
       printf("Salary         : ");
       scanf("%d",&emp[i].Salary);
       printf("city           :");
       scanf("%s",emp[i].add.City);
       printf("State          :");
       scanf("%s",emp[i].add.Addres);
       printf("-----------------------------\n");
    }
    high=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(emp[i].add.City,"Hyderabad")==0)
        {
            if(emp[i].Salary>high)
            {
                high=emp[i].Salary;
                p=i;
            }
        }
    }
    printf("Highest salary employee details: \n");
    printf("EMPNO\tNAME\tSALARY\tCITY\tSTATE\n");
    printf("%d\t%s\t%d\t%s\t%s",emp[p].Eno,emp[p].Name,emp[p].Salary,emp[p].add.City,emp[p].add.Addres);
}
