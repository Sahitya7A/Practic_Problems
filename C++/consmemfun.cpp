#include<iostream>
using namespace std;
class test
{
    int value;
public:
    test(int v=0){value=v;}
   const int getvalue() {return value;}
};
int main()
{
    test t(20);
    cout<<t.getvalue();
    return 0;
}
