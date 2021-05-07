#include<stdio.h>
struct mine
{
    int id;
    char num[10];
}m[20];
void main()
{
    int i,n;
    printf("enter size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter details of mine %d:",(i+1));
        scanf("%d%s",&m[i].id,m[i].num);
    }
    printf("printing details of mine");
    for(i=0;i<n;i++)
    {
        printf("%d  %s",m[i].id,m[i].num);
    }
}
