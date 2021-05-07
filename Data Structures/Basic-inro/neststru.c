#include<stdio.h>
struct mine
{
    int id;
    char num[10];
    struct nime
    {
        int mrk1;
        int mrk2;
    }n[20];
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
    for(i=0;i<n;i++)
    {
        printf("enter details of nime %d:",(i+1));
        scanf("%d%d",&m[i].n[i].mrk1,&m[i].n[i].mrk2);
    }

    printf("printing details of mine");
    for(i=0;i<n;i++)
    {
        printf("%d  %s",m[i].id,m[i].num);
    }
     printf("printing details of nime");
     for(i=0;i<n;i++)
    {
        printf("%d%d",m[i].n[i].mrk1,m[i].n[i].mrk2);
    }
}
