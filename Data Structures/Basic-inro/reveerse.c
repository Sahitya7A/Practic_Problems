#include<stdio.h>
void main()
{
 int a[20],i,n,j,temp;
 printf("enter size");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
   for(i=0;i<((n/2)-1);i++)
   {
       a[n-1-i]=a[i];
   }
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
}
