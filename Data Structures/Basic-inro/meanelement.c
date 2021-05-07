#include<stdio.h>
void main()
{
    int a[4]={8,4,6,10},i,sum=0;
    float mean;
    for(i=0;i<4;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/4;
    printf("mean is %f",mean);
}
