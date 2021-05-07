#include<stdio.h>
void main()
{
    int a[20],f[20],i,j,n,count=1;
    printf("enter size of the array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
            count=1;
        }
    }
    printf("unique elements are\n");
    for(i=0;i<n;i++)
    {
        if(f[i]==1)
        {
            printf("%d\t",a[i]);
        }
    }
}
