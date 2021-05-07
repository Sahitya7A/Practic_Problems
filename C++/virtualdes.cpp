#include<iostream>
using namespace std;
class B
{
public:
    B()
    {
        cout<<"BC"<<endl;
    }
  virtual  ~B()
    {
        cout<<"BD"<<endl;
    }
};
class D:public  B
{
    public:
    D()
    {
     cout<<"DC"<<endl;
    }
    ~D()
    {
        cout<<"DD"<<endl;
    }
};
int main()
{
    B *b=new D();
    delete b;
    return 0;
}
