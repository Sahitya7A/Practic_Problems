#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        if(b==0){
            throw"Division is not possible:\n";
            cout<<"YOU HAVE THROWN";}//after throw statemnts will not get executed
        else{
                cout<<a/b;}
    }
    catch(const char *msg)//can have o. of catch's
    {
        cout<<msg;
    }
  catch(...)//should be written at last
    {
        cout<<"wrong";
    }
    cout<<"\nHi SAHITYA";
    return 0;
}
//trying to handle the excption and making other program to execute.
//implicit conversions will not happen[a=65]
//no catch for throw
