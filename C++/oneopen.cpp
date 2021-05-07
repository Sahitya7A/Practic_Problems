#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream one;
    one.open("aa.txt");
    //one("aa");
    one<<"Vishnu"<<endl;
    one<<"Vishu"<<endl;
    one<<"Arvin"<<endl;
    one.close();
//ofstream one("Ab");
one.open("Ab.txt");
    one<<"Lakshmi"<<endl;
    one<<"Radha"<<endl;
    one<<"Arnav"<<endl;
    one.close();
    char lin[70];
    int n=70;
    ifstream two;
    two.open("aa.txt");
    while(two)
    {
        two.getline(lin,n);
        cout<<lin<<endl;
    }
    two.close();
    two.open("Ab.txt");
    while(two)
    {
        two.getline(lin,n);
        cout<<lin<<endl;
    }
    two.close();
    return 0;
}
