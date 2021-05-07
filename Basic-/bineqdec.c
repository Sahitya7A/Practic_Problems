#include<stdio.h>
void main()
{
    int n,c,k;
    printf("enter n value is decimal system\n");
    scanf("%d",&n);
    printf("decimal in binary of %d:",n);
    for(c=31;c>=0;c--)
    {
        k=n>>c;
        if(k&1)
            printf("1");
        else
            printf("0");
    }
}
