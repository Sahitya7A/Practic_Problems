#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    int a,b;
    cout<<"enter a,b values";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(gcd(b,a%b));
    }
}
