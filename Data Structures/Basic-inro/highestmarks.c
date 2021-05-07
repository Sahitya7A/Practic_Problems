#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
void main()
{
    struct student s[10];
    int i,n,big,a;
    printf("enter size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d",(i+1));
        scanf("%d%s%d",&s[i].rollno,s[i].name,&s[i].marks);
    }
   big=s[0].marks;
   for(i=0;i<n;i++)
   {
       if(s[i].marks>big)
       {
           big=s[i].marks;
           a=i;
       }
   }
   printf("Student with highest marks\n");
   for(i=0;i<n;i++)
   printf("%s\n%d\n",s[a].name,big);
}
