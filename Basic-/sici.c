#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float r,si,amount,ci;
printf("enter principle,time,rate\n");
scanf("%d%d%f",&p,&t,&r);
si=(p*t*r)/100;
amount=p*pow((1+r/100),t);
ci=amount-p;
printf("%.3f\n",si);
printf("%.3f\n",ci);
}
