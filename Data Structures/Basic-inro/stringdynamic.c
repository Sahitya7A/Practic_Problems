#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *s1,n;
    printf("enter size\n");
    scanf("%d",&n);
    s1=(char*)malloc(n*sizeof(char));
    scanf("%s",s1);
    puts(s1);
}
