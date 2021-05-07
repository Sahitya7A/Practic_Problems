#include<stdio.h>
void main()
{
    int a[10],n,i,big,small;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    big=a[0];
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
        else if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("smallest is %d and largest is %d",small,big);
}
