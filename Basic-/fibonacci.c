#include<stdio.h>
void main()
{
int n,i,a,b,c;
printf("enter n value\n");
scanf("%d",&n);
a=0,b=1;
printf("\n%d\n%d\n",a,b);
i=3;
while(i<=n)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
i++;
}
}
