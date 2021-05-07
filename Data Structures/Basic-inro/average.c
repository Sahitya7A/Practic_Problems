#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0,avg;
    printf("enter size of an array\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avg=sum/n;
        printf("%d is the average",avg);
}
