#include<stdio.h>
void main()
{
    int a[20],f[20],i,j,n,coun=1;
    printf("enter size of array\n");
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
                coun++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=coun;
            coun=1;
        }
    }
    printf("the original array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("the frequency array\n");
    for(i=0;i<n;i++)
        printf("%d\t",f[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(f[i]!=0)
            {
                printf("%d\t",a[i]);
                printf("%d\t",f[i]);
                printf("\n");
            }
        }
}
