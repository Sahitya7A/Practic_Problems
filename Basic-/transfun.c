#include<stdio.h>
void read_arr(int a[10][10],int row,int col)
{
int i,j;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
printf("%d %d elements:\n",i,j);
scanf("%d",&a[i][j]);
}
}
}
void trans_arr(int m1[10][10],int m2[10][10],int row,int col)
{
int i,j;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
m2[i][j]=m1[j][i];
}
}
}
void print_arr(int m[10][10],int row,int col)
{
int i,j;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
printf("%d\t",m[i][j]);
}
printf("\n");
}
}
void main()
{
int m1[10][10],m2[10][10],row,col;
printf("enter rows");
scanf("%d",&row);
printf("enter clumns");
scanf("%d",&col);
read_arr(m1,row,col);
trans_arr(m1,m2,row,col);
print_arr(m2,row,col);
}
