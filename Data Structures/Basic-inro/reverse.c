#include<stdio.h>
void main()
{
    int a[20],i,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }

}
