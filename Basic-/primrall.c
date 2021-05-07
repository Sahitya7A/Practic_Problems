#include<stdio.h>
void main()
{
int n,i,j,v;
printf("enter n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
        v=0;
for(j=1;j<=i;j++)
if(i%j==0)
{
v++;
}
if(v==2)
{
    printf("%d\n",i);
}
}
}
