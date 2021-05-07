#include<stdio.h>
void main()
{
    int a[20],n,i,*p;
    printf("enter n value\n");
    scanf("%d",&n);
    p=a;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}
