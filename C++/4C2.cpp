#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  //  ofstream out("test");//open file
    char name[20];
    double cost;/*
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter cost:";
    cin>>cost;
    out<<name<<endl;
    out<<cost;
    out.close();*/
    ifstream in("test");
    in>>name;
    in>>cost;
    cout<<"Name :"<<name<<endl;
    cout<<"Cost :"<<cost<<endl;
    in.close();
    return 0;
}
