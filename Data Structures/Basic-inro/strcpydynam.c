#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *s1,*s2,n;
    printf("enter size\n");
    scanf("%d",&n);
    s1=(char*)malloc(n*sizeof(char));
    scanf("%s",s1);
    s2=(char*)malloc(sizeof(strlen(s1)));
    strcpy(s2,s1);
    printf("%s",s2);
    printf("-----------------");
    printf("%s",s1);
}
