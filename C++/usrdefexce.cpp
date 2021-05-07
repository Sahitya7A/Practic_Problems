#include<iostream>
#include<exception>
using namespace std;
class mine : public exception
{
public:
    const char *what()
    {
        return "C++ Exception";
    }
};
int main()
{
    try
    {
        throw mine();
    }
    catch(mine a)
    {
        cout<<"My Exception caught"<<endl<<a.what()<<endl;
    }
    return 0;
}
//super class exception all kind of class exceptions
