#include<iostream>
using namespace std;
void f1()throw(int)
{
    cout<<"\nSTART ";
 //  try
   // {
        throw 97;
    //}
    //catch(int i)
    //{
      //  cout<<"Caught at f1():"<<i;
    //}
    cout<<"\nEND ";
}
void f2() throw(int)
{
    cout<<"\nSTART ";
 //   throw 97;
    f1();
    cout<<"\nEND ";
}
void f3()
{
    cout<<"\nSTART ";
    try
    {
        f2();
    }
    catch(int i)
    {
        cout<<"\nCaught Expression: "<<i;
    }
    cout<<"\nEND ";
}
int main()
{
    f3();
    return 0;
}
