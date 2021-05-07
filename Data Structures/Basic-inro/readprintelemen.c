#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("Reading array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
