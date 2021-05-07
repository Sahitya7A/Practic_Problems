#include<stdio.h>
//#include<math.h>
long recpow(int,int);
long nonrecpow(int,int);
void main()
{
    int n,p;
    long a,b;
    printf("enter n,p values\n");
    scanf("%d%d",&n,&p);
    a=recpow(n,p);
    printf("using recursion is %ld\n",a);
    b=nonrecpow(n,p);
    printf("not using recursio is %ld\n",b);
}
long recpow(int n,int p)
{
    if(p)
    {
        return(n*recpow(n,p-1));
    }
    return 1;
}
long nonrecpow(int n,int p)
{
    int i;
    long power=1;
    for(i=1;i<=p;i++)
    {
        power=power*n;
    }
    return power;
}
