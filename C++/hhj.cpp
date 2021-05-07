#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r,i=0,sum=0;
    cout<<"enter n";
    cin>>n;
    while(n>0)
    {
        if(n>=10){
        r=n/10;
        n=n%10;
    }
    else
    {
        r=n;
        n=0;
    }
    sum+=pow(r,i);
    i++;
}
cout<<sum;
}
