#include<stdio.h>
void main()
{
    int a[20],i,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("Reading array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Printing array elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Printing array elements in reverse order\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
