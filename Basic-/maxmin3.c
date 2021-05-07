#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if((a<=b)&&(a<=c))
{
if(b<c)
printf("min is %d,max is %d\n",a,c);
else
printf("min is %d,max is %d\n",a,b);
}
else if((b<=a)&&(b<=c))
{
if(a<c)
printf("min is %d,max is %d\n",b,c);
else
printf("min is %d,max is %d\n",b,a);
}
else
{
if(a<b)
printf("min is %d,max is %d\n",c,b);
else
printf("min is %d,max is %d\n",c,a);
}
}
