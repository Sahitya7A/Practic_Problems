#include<stdio.h>
#include<math.h>
void main()
{
float s=30,u=0,t,a=9.8,temp;
/*s=ut+1/2at^2
s=0+(0.5)*a*t^2*/
temp=(0.5)*a;
/*s=temp*t^2
s/temp=t^2
t=sqrt(s/temp)*/
t=sqrt(s/temp);
printf("%.4f\n",t);
}
