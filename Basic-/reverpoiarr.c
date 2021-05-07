#include<stdio.h>
void main()
{
    int a[20],i,n,*p;
    printf("enter n value\n");
    scanf("%d",&n);
    p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[n-1];
    for(i=n-1;i>=0;i--)
    {
        printf("%d at %d\n",i,*p);
        p--;
    }
}
