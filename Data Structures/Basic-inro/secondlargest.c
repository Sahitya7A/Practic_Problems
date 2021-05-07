#include<stdio.h>
void main()
{
    int a[10],i,j,n,temp;
    printf("enter array size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array is sorted\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\n",a[i]);
    }
    printf("%d is second largest element",a[1]);
}
