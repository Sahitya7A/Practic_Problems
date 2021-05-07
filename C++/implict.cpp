#include<iostream>
using namespace std;
int main()
{
    int a=20;
    char b='z';
    a=a+b;//implict conversion
    cout<<"a="<<a<<endl;
    float c=a+35.5;
    cout<<"c="<<c<<endl;
    cout<<b;
    return 0;
}
