#include<iostream>
#include<fstream>
using namespace std;
int main()
{char ch;
    fstream you1;
    you1.open("you.txt",ios::out);
    if(!you1)
    {
        cout<<"File Creation Failed";
    }
    else
    {
        //cout<<"New File Created";
        //you1<<"LeArning file HaNdlinG  ..";
        while(!you1.eof()){
        you1>>ch;
        cout<<ch;}
        you1.close();
    }
    return 0;
}
