#include<stdio.h>
int rec(int,int);
int non(int,int);
void main()
{
int a,b,x,y;
printf("enter a,b values");
scanf("%d%d",&a,&b);
x=rec(a,b);
printf("recursion is %d\n",x);
y=non(a,b);
printf("nonn recursion is %d\n",y);
}
int rec(int a,int b)
{
if(b==0)
return a;
else
return(rec(b,a%b));
}
int non(int a,int b)
{
int z;
while(a%b!=0)
{
z=a%b;
a=b;
b=z;
}
return z;
}
