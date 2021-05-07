#include<stdio.h>
void main()
{
int i,n,c=0;
printf("enter n values\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
printf("%d is prime nnumber\n",n);
else
printf("%d is not a prime number\n,n");
}
