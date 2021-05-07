#include<stdio.h>
void main()
{
    int a[4]={9,7,6,4},i,max,smax;
    max=a[0];
    for(i=1;i<=4;i++)
    {
        if(a[i]<max)
        {
            max=a[i];
        }
    }
    smax=a[0];
    for(i=1;i<=4;i++)
    {
        if(a[i]!=max)
        {
            if(a[i]>smax)
            {
                smax=a[i];
            }
        }
    }
    printf("%d is second largest",smax);
}
