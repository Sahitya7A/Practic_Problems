#include<iostream>
using namespace std;
int main()
{
    int a[10],i,big;
    cout<<"Enter array elements\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    big=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    cout<<"biggest num is "<<big;
    return 0;
}
