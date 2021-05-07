#include<stdio.h>
void main()
{
    int num,su=0,re=0,temp;
    printf("enter num value\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        re=temp%10;
        su=su+(re*re*re);
        temp=temp/10;
    }
    if(su==num)
    {
        printf("is amstrong number %d\n",num);
    }
    else
    {
        printf("is not....??:{}+_)***123$5^&*asdFGHJJHGFDSA");
    }

}
