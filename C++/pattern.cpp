/* Write a CPP Program to print the following pattern for any given positive integer n.

Sample :
5 //input no of rows
//output
5432*
543*1
54*21
5*321
*4321

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n value:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j==(n-(i-1)))//if(j==i)
            {
                cout<<"*";
            }
            cout<<j;
        }
        cout<<endl;
    }
   // cout<<-1-1-1;
    return 0;
}
