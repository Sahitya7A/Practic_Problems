#include<stdio.h>
void main()
{
    int n,x,r,sum=0,sum1=0;
    printf("enter n value");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        sum1=sum1+r;
        sum=sum*10+r;
        n=n/10;
    }
    printf("sum o fdigits %d\n",sum1);
    if(sum==x)
    {
        printf("palindrome is %d",x);
    }
    else
    {
        printf("not a palindrome is %d",x);
    }
}
