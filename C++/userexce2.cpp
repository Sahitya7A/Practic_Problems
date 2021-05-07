#include<iostream>
#include<exception>
using namespace std;
class div : public exception
{
public:
    const char *what() const throw()
    {
        return "NOT ABLE TO COMPLETE BUT I WILL";
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            div d;
            throw d;
        }
        else
        {
            cout<<a/b<<endl;
        }
    }
    catch(exception &s)
    {
        cout<<s.what()<<endl;
    }
    return 0;
}
