#include<stdio.h>
void main()
{
    int a[20],j,i,n,d,t[20];
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number of times to be rotated\n");
    scanf("%d",&d);
    //Storing 1st d element into temp array
    for(i=0;i<d;i++)
    {
        t[i]=a[i];
    }
    for(i=d;i<n;i++)
    {
        a[i-d]=a[i];
    }
    for(i=n-d,j=0;i<n;i++,j++)
    {
        a[i]=t[j];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
