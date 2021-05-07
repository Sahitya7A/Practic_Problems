#include<iostream>
using namespace std;
int main()
{
    float f=78.65;
    /*int a=f;
    in c*/
    int c=static_cast<int>(f);
    cout<<c;
    return 0;
}
