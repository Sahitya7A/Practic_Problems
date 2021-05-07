#include<stdio.h>
void main()
{
    int a[10],i,ec=0,oc=0,n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("reading array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
         ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("no. even elements:%d \t no. odd elements:%d",ec,oc);
}
