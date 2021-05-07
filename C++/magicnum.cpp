#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    cout<<"Enter array elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
   int n=sum,t,r,sum1=0;
   t=n;
   while(t!=0)
   {
       r=t%10;
       sum1=sum1+r;
       t=t/10;
   }
   if(sum1==1)
   {
       cout<<1;
   }
   else
   {
       cout<<-1;
   }
    return 0;
}
