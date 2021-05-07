#include<stdio.h>
#include<math.h>
void main()
{
    int x,i,k=1;
    float sum=1;
    printf("enter n value");
    scanf("%d",&x);
    for(i=1;i<=3;i++)
    {
        k=-k;
        sum=sum+(k*pow(x,i))/(i*2);
    }
    printf("expansion of series is %f",sum);
}
