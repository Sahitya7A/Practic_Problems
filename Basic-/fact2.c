#include<stdio.h>
int rec(int);
int non(int);
void main()
{
int n,a,b;
printf("enter  n value\n");
scanf("%d",&n);
a=rec(n);
printf("recursion is %d\n",a);
b=non(n);
printf("non recursion is %d",b);
}
int rec(int n)
{
if(n==0)
return 1;
else
return(n*rec(n-1));
}
int non(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
