#include<stdio.h>
void main()
{
    int a[10],i,n,pos;
    printf("enter size of array\n");
    scanf("%d",&n);
        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    for(i=(pos-1);i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("deletion is completed\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
