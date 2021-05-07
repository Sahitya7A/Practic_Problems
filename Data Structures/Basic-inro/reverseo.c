#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("Reading array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-i);i++)
    {
        for(j=0;j<(n/2);j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("the Array in reverse order is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
