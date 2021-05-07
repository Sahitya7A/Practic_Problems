#include<stdio.h>
void main()
{
    int m1,m2,m3;
    float per;
    printf("enter marks\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    per=(m1+m2+m3)/3.0;
    printf("%.2f\n",per);
    if(per>=70)
    {
        printf("distinction");
    }
    else if(per>=60&&per<=70)
    {
        printf("first class");
    }
    else if(per>=40&&per<=60)
    {
        printf("second class");
    }
    else if(per<=40)
    {
        printf("failed");
    }
}














