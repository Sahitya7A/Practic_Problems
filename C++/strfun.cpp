#include<iostream>
using namespace std;
int main()
{
    string s;
    std::string::iterator i;
    std::string::reverse_iterator i1;
    cout<<"Enter string :"<<endl;
    getline(cin,s);//input function
    cout<<s<<endl;
    s.push_back('V');
    cout<<s<<endl;
    //cout<<"Capacity :"<<s.capacity();<<endl;
  /* string k="Keshav memorial institute of technology";
    cout<<k<<endl;
   // cout<<k.capacity()<<endl;
    //k.resize(13);
    cout<<k<<endl;
    //k.shrink_to_fit();
    for(i=k.begin();i!=k.end();i++)
    {
        cout<<*i<<endl;
    }
    for(i1=k.rbegin();i1!=k.rend();i1++)
    {
        cout<<*i1<<endl;
    }
    string s1="KMIT";
    cout<<s1<<endl;
    string s2="NGIT";
    cout<<s2<<endl;
    char c[15];//={"kmit_ngit"}
    s1.copy(c,2,0);
    cout<<c<<endl;
  //  cout<<s1<<endl;
   // cout<<s2<<endl;
    s2.swap(s1);
    cout<<s1<<endl;
    cout<<s2<<endl;*/
    cout<<s.find_first_of("andhya")<<endl;
    cout<<s.find_last_of("V")<<endl;
    cout<<s.empty()<<endl;
    cout<<s.find("SandhyaV")<<endl;
    s.clear();
    cout<<s.empty()<<endl;
    return 0;
}















