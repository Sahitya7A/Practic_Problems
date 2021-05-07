#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    float a[10],sum=0,sum2=0,mean,var,devia;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
{
                scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        sum2=(sum2+(a[i]-mean)*(a[i]-mean));
    }
    var=sum2/n;
    devia=sqrt(var);
    printf("%f\n%f\n%f\n",mean,var,devia);
}

