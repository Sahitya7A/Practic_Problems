#include<stdio.h>
void main()
{
    int i,j,n,num=1;
    printf("enter n value");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
          for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",num);
                num++;
            }
            printf("\n");
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        }
}