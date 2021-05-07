#include<stdio.h>
struct institute
{
    int is_id;
    char is_nam[20];
}in[1];
struct course
{
    int c_id;
    char c_nam[20];
}c[2];
struct student
{
    int s_id;
    int s_roll;
    char s_nam[20];
    int s_mark;
}s[3];
void main()
{
    int i;
    printf("Enter institute details:");
    for(i=0;i<1;i++)
    {
        scanf("%d%s",&in[i].is_id,in[i].is_nam);
    }
    for(i=0;i<2;i++)
    {
        printf("Enter details of course %d:",(i+1));
        scanf("%d%s",&c[i].c_id,c[i].c_nam);
    }
    for(i=0;i<3;i++)
    {
        printf("Enter details of student %d:",(i+1));
        scanf("%d%d%s%d",&s[i].s_id,&s[i].s_roll,s[i].s_nam,&s[i].s_mark);
    }
    printf("Institute details:\n");
    for(i=0;i<1;i++)
    {
        printf("%d %s\n",in[i].is_id,in[i].is_nam);
    }
   // printf("\n");
    printf("Course details:\n");
    for(i=0;i<2;i++)
    {
        printf("%d %s\n",c[i].c_id,c[i].c_nam);
    }
    printf("\n");
    printf("Student details:\n");
    for(i=0;i<3;i++)
    {
        printf("%d %d %s %d\n",s[i].s_id,s[i].s_roll,s[i].s_nam,s[i].s_mark);
    }
}
