#include<iostream>
using namespace std;
class base
{
private:
    int i,j;
public:
    void set(int a,int b){ i=a; j=b;}
    void show()
    {
        cout<<"i="<<i<<",j="<<j<<endl;
    }
};
class derived : public base
{
    int s;
public:
    derived(int k)
    {
        cout<<k<<endl;
    }
   // void setr(){ cout<<s<<endl;}
};
int main()
{
    derived od(9);
    od.set(9,7);
    od.show();
    return 0;
}
/*public access specifier: public of base will be public of derived and protected of base will be protected of derived
private access specifier: public and private of base will become private of derived*/
