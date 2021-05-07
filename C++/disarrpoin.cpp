/* Write a cpp to read and print 2D elements using pointers
sample
input
2
3
1 2 3
4 5 6
output
1 2 3
4 5 6
*/
#include<iostream>
using namespace std;
class Array2D
{
    int a[10][10],i,j,r,c;
    int (*p)[10];
    public:
    void input();
    void output();
};
void Array2D::input()
{
    cout<<"Enter no. of rows and columns:";
    cin>>r>>c;
    cout<<"Enter array elements:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>(*(*(a+i)+j));
        }
    }
    p=a;
}
void Array2D::output()
{
    cout<<"Array elements are:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<(*(*(p+i)+j))<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Array2D m;
    m.input();
    m.output();
    return 0;
}
