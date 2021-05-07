#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,i,sum=0;
    printf("enter n and x valuess");
    scanf("%d%d",&n,&x);
    if(n<0||x<0)
        printf("illegal valuue");
    else
    {
        for(i=0;i<=n;i++)
        {
                   sum=sum+pow(x,i);
        }
    }
    printf("sum=%d\n",sum);
}
