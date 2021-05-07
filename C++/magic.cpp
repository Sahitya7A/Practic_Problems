#include<iostream>
using namespace std;
int main()
{
    int n,s,r;
    cout<<"enter digit:";
    cin>>n;
    s=n;
    while(s>9)
    {
        n=s;
        s=0;
        while(n>0)
        {
            r=n%10;
            s=s+r;
            n=n/10;
        }
    }
    if(s==1)
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
