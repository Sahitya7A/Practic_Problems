/* Alpha organization manager wants to find out the employee details
who is drawing the highest salary in the organization.

Note: Structure members: Eno,Name,Salary

sample output:

How many employee info you want to accept : 2
-----------------------------
Enter details for 2 employees:
-----------------------------
Employee Number: 1
Name           : sam
Salary         : 5000
-----------------------------
Employee Number: 2
Name           : ram
Salary         : 6000
-----------------------------
Highest salary employee details:
-----------------------------
EMPNO    NAME  SALARY

 2      ram     6000[>long]
*/

#include<stdio.h>
struct Employee
{
 int Eno;
 char Name[20];
 int Salary;
};
void main()
{
    struct Employee emp[5];
    int n,i,high,p;
    printf("How many employee info you want to accept :");
    scanf("%d",&n);
    printf("Enter details for %d employees:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d",&emp[i].Eno,emp[i].Name,&emp[i].Salary);
    }
    printf("Highest salary employee details:\n");
    high=emp[0].Salary;
    for(i=0;i<n;i++)
    {
        if(emp[i].Salary>high)
        {
            high=emp[i].Salary;
            p=i;
        }
    }
    printf("EMPNO\tNAME\tSALARY\n");
    printf("%d\t%s\t%d\t",emp[p].Eno,emp[p].Name,emp[p].Salary);
}
