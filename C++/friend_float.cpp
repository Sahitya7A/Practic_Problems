/*Write a C++ program to calculate mean of two float variables using friend function
sample
input:
enter two values
2.5
3.6
output:
mean = 3.05

*/
#include<iostream>
using namespace std;
//write required code

class B;
class A
{
   float no1;
   public:
    A (float x)
    {
       no1=x;
    }
    friend float mean(A a,B b);
};
class B
{
    float no2;
    public:
    B(float y)
    {
        no2=y;
    }
    friend float mean(A a,B b);
};
float mean(A a,B b)
{
    return(a.no1+b.no2)/2;
}

int main()
{
    float no1,no2;
    cout<<"enter two values"<<endl;
    cin>>no1>>no2;
    A aobj(no1);
    B bobj(no2);
    cout<<"mean = "<<mean(aobj,bobj)<<endl;
    return 0;
}
