#include<iostream>
using namespace std;
class myclass
{
    public:
    int i,j,k;
};
int main()
{
    myclass a,b;
    a.i=100;
    a.j=9;
    a.k=a.i*a.j;
    b.i=20;
    b.j=800;
    b.k=12;
    cout<<"a.k="<<a.k<<endl;
    cout<<"b.k="<<b.k<<endl;
    return 0;
}
