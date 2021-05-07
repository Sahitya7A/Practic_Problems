#include<stdio.h>
void main()
{
    int s[30],i,n,*p,sum=0;
    printf("enter n value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    p=s;
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("%d",sum);
}
