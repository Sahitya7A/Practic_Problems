#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2],k,i,j;
    printf("enter array a values");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter array b values");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter array c values");
    {
        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
           printf("%d",c[i][j]);
        }
        printf("\n");
    }
    }
    printf("multiplication of matrices");
    {
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            priintf("%d",c[i][j]);
        }
        printf("\n");
    }
    }
}
