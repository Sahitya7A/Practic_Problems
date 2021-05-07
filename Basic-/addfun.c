#include<stdio.h>
void read_arr(int a[10][10],int row,int col)//Reading matrix values
{
int i,j;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)//Addition of matrices
{
int i,j;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
m3[i][j]=(m1[i][j]+m2[i][j]);
}
}
}
void print_arr(int m[10][10],int row,int col)//Print array elements
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
int m1[10][10],m2[10][10],m3[10][10],row,col;
printf("enter row");
scanf("%d",&row);
printf("enter column");
scanf("%d",&col);
read_arr(m1,row,col);
read_arr(m2,row,col);
add_arr(m1,m2,m3,row,col);
print_arr(m3,row,col);
}
