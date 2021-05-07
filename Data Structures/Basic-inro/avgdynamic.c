#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*p,sum=0,avg;
    printf("enter array size\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        sum = sum +(*(p+i));
    }
    avg=sum/2;
    printf("%d is sum",sum);
    printf("%d is average",avg);
}
