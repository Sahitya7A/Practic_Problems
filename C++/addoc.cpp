#include<iostream>
using namespace std;
class matrix
{
    int i,j;
    int a[10][10],b[10][10],c[10][10],n1,n2;
    public:
        void read();
        int add();
};
void matrix::read()
{
   cout << "Enter the rows   "; cin >> n1;
        cout << "Enter the columns   "; cin >> n2;
        cout << "Enter elements of first matrix\n\n";
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            cin >> b[i][j];
        }
    }
}
int matrix::add()
{
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix a;
    //int a[20][20],b[20],r1,r2,c[20][20];
    a.read();
    a.add();
   // int res=a.add(a,b,c);
    //cout<<"Resultant matrix is"<<res<<"\t";
}
