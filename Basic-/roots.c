#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    printf("enter roots\n");
    scanf("%d%d%d",&a,&b,&c);
    float r1,r2;
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        printf("roots are equal\n");
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("root 1 is %f\n",r1);
        printf("root 2 is %f\n",r2);
    }
    else if(d>0)
    {
        printf("roots are distinct\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root 1 is %f\n",r1);
        printf("root 2 is %f\n",r2);
    }
    else if(d<0)
    {
        printf("roots are imaginary");
    }
}
