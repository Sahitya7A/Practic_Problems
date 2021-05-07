#include<stdio.h>
void main()
{
    int a[20],i,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter marks of 10 students\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d are marks of students\n",a[i]);
    }
}
