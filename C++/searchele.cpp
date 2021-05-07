#include<iostream>
using namespace std;
class searchelement
{
    public:int sea,i,n,a[20];
    public:void read()
    {
        cout<<"enter size,array and search element"<<endl;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>sea;
    }
   public:void search()
    {
        int key=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==sea)
            {
                return key=1;
            }
            else
                return key=-1;
        }
    }
};
int main()
{
    searchelement s;
    s.read();
    int r=s.search();
    cout<<r;
    retur 0;
}
