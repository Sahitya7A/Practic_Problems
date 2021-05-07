#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float gpa;
    public:
    public:void read()
    {
        int m1,m2,m3;
        cin>>rollno;
        cin>>name;
        cin>>m1>>m2>>m3;
        gpa=(m1+m2+m3)/30.0;
    }
    public:void Display()
    {
        cout<<rollno<<" "<<name<<" "<<gpa<<endl;
        /*cout<<rollno;
        cout<<name;
        cout<<gpa;*/
    }
};
int main()
{
    int i,n;
    cout<<"Enter no of students :";
    cin>>n;
    student s[n];
    cout<<"Enter rollno, name & 3 subject marks"<<endl;
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    cout<<"Rollno Name GPA"<<endl;
    for(i=0;i<n;i++)
    {
        s[i].Display();
    }
    return 0;
}





