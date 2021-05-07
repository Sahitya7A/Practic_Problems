#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   // ofstream one("a");
    char name[20];
    int m1,m2,m3;
   /* cout<<"Enter name : ";
    cin>>name;
    one<<name<<endl;
    cout<<"Enter marks : ";
    cout<<endl<<"m1=";
    cin>>m1;
    one<<m1<<endl;
    cout<<endl<<"m2=";
    cin>>m2;
    one<<m2<<endl;
    cout<<endl<<"m3=";
    cin>>m3;
    one<<m3<<endl;*/
    ifstream one("a");
    one>>name;
    one>>m1;
    one>>m2;
    one>>m3;
    cout<<"Name : "<<name<<endl;
    cout<<"m1 = "<<m1<<endl<<"m2 = "<<m2<<endl<<"m3 = "<<m3<<endl;
    one.close();
    return 0;
}
