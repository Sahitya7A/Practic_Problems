#include<iostream>
using namespace std;
class DMAtest
{
    public:
    DMAtest()
    {
        cout<<"Constructor called"<<endl;
    }
    ~DMAtest()
    {
        cout<<"Destructor called"<<endl;
    }
    void display()
    {
        cout<<"Hello VISHU>>"<<endl;
    }
};
int main()
{
    DMAtest *t;
    t=new DMAtest;
    t->display();
    delete t;
    return 0;
}
