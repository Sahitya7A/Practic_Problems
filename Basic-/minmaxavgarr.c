#include<stdio.h>
void main()
{
    int a[20],n,i,sum,max,avg,min;
    printf("enter num value");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sum=a[0];
        max=a[0];
        min=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
            max=a[i];
            }
            if(a[i]<min)
            {
            min=a[i];
            }
            sum=sum+a[i];
        }
        avg=(sum)/(float)n;
        for(i=0;i<n;i++)
            printf("%5d",a[i]);
        printf("\n%d\n",max);
        printf("%d\n",min);
        printf("%d\n",sum);
        printf("%d\n",avg);
}
