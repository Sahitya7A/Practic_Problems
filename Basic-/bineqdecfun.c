#include<stdio.h>
int binary(int n)
{
    int c,k;
    for(c=31;c>=0;c--)
    {
        k=n>>c;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
void main()
{
    int n;
    printf("enter n value in decimal sysytem");
    scanf("%d",&n);
    printf("decimal in binary of %d is:",n);
    binary(n);
}
