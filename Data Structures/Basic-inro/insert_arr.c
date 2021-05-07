#include<stdio.h>
void main()
{
    int a[10],i,n,pos,element;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&element);
    for(i=n;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=element;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
