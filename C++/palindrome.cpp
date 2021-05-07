/* WACPP to find whether the given string is palindrome or not.

Sample:
madam//input
1 //output

Sample2 :
hello //input
-1 //output

*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    char a[20];
    int len=s.size();
    s.copy(a,len,0);
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]!=a[len-i-1])
        {
            flag++;
            break;
        }
    }
    if(flag)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"1";
    }
    return 0;
}
