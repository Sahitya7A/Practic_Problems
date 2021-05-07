/* Write a cpp program to search an element in an array using pointers
sample
1.  input
    5
    1 5 4 2 0
    4
    output
    1

2.  input
    5
    1 5 4 2 0
    10
    output
    -1
*/
#include<iostream>
using namespace std;
class searchelement
{
  public:int search(int a[],int si,int n)
  {
    int key=0,i;
      for(i=0;i<n;i++)
      {
          if(a[i]==si)
          {
               key++;
               return key;
          }
          else
          {
            return key=-1;
          }
      }
  }
};
int main()
{
    int i,n,a[20],sea;
    cout<<"Enter size"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter search element"<<endl;
    cin>>sea;
    searchelement se;
    int h;
    h=se.search(a,sea,n);
    cout<<h<<endl;
    return 0;
}
