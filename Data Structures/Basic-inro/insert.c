#include<stdio.h>
void main()
{
    int a[20],i,n,pos,element;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position\n");
    scanf("%d",&pos);
    printf("enter the element\n");
    scanf("%d",&element);
    for(i=n;i<pos;i++)
    {
        a[i]=a[i-1];
        a[pos]=element;
        n++;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\t",&a[i]);
    }
}
