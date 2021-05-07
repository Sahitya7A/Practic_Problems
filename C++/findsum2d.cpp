/* Write a cpp program to find the sum of all elements in an 2D array
sample
input
2
3
1 2 3
1 1 1
output
1 2 3
1 1 1
9
*/

//declare class and necessary statements
#include<iostream>
using namespace std;
class FindSum2D
{
  int a[10][10],r,c,i,j,suum;//error
  public:
  void input();
  void sum();
  void output();
};
void FindSum2D::input()
{
    cout<<"Enter no of rows and columns:";
    cin>>r>>c;
    cout<<"Enter array elements:";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cin >> a[i][j];
        }
    }
}
void FindSum2D::sum()
{
    summ=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            suum=suum+a[i][j];
        }
    }
}
void FindSum2D::output()
{
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout << a[i][j];
        }
        cout<<endl;
    }
    cout<<"SUM ="<<suum;
}
int main()
{
    FindSum2D f;
    f.input();
    f.sum();
    f.output();
    return 0;

}
