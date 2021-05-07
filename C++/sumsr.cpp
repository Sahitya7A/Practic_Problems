/* WACPP program to print the sum of the digits in a given string.

print -1 if there are no digits in it.

Sample:
k1m2it //input
3 //output

Sample2:
ngit123 //input
6 //output

Sample3:
program //input
-1 //output

*/
#include<iostream>
//#include<string>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter string";
    int i;
    for(i=0;i<10;i++)
    {
        cin>>s[i];
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        if((s[i]>=0)&&(s[i]<=9))
        {
            sum=sum+s[i];
        }
    }
    if(sum)
    {
        cout<<"-1";
    }
    else
    {
        cout<<sum;
    }
    return 0;
}
