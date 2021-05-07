#include<stdio.h>
void main()
{
    int x,n,i,r,sum=0;
    printf("enter n value\n");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==x)
        printf("YESSSSSS>>>>>>   is %d",sum);
    else
        printf("NOOOOOOOOOOOO>>>>>>>>");
}
