#include<iostream>
using namespace std;
int main()
{
    int i,j,a;
    cout<<"Enter a";
    cin>>a;
    for(i=1;i<a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<"+"<<i<<"="<<(j+i)<<endl;
        }
    }
}
