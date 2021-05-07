#include<iostream>
using namespace std;
class student
{
    int id;
    char nam[20];
    float gpa;
    public:
    void read()
    {
        int m1,m2,m3;
        cin>>id>>nam>>m1>>m2>>m3;
        gpa=(m1+m2+m3)/30;
    }
    void display()
    {
        cout<<id<<"\t"<<nam<<"\t"<<gpa<<"\n";
    }
};
int main()
{
    int n;
    cout<<"Enter number of students";
    cin>>n;
    student s[n];
    int i;
    cout<<"Enter rollno, name & 3 subject marks";
    for(i=0;i<n;i++)
    {
        s[i].read();
    }
    cout<<"Roll.no Name GPA";
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    return 0;
}
