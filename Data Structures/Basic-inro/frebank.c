#include<stdio.h>
void main()
{
int a[20],f[20],i,j,n,count=1;
printf("Number of Notes=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    f[i]=-1;
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
            f[j]=0;
        }
    }
    if(f[i]!=0)
    {
        f[i]=count;
        count=1;
    }
}
     for(i=0;i<n;i++)
     {
         if(f[i]!=0)
         {
               printf("%d*%d = %d",a[i],f[i],(a[i]*f[i]));
         }
     }
}
