#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,v;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<"Enter b value: ";
    cin>>b;
    for(i=a;i<=b;i++)
    {
        v=0;
        for(j=a;j<=i;j++)
        {
            if(i%j==0)
            {
                v++;
            }
            if(v==2){
                cout<<i<<" ";}
        continue;
        }
        //continue;
    }
    return 0;
}
