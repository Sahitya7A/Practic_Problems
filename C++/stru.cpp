/*
Write a C++ Program to display Names, Roll No., and grades of 3 students who
have appeared in the examination. Declare the structure of name, Roll No. and grade.
Create an array of structure varaibles. Read and display the contents of the array.
sample:
input
Enter no of students :3
Enter rollno, name & 3 subject marks
501
ram
78 75 72
502
sam
85 89 93
503
gita
76 80 84
output:
Rollno Name GPA
501 ram 7.5
502 sam 8.9
503 gita 8
*/
#include<iostream>
using namespace std;
struct student
{
    int id;
    char name[10];
    float m1,m2,m3;
    float grade;
}s[10];
int main()
{
    int i,n;
    cout<<"Enter no of students :";
    cin>>n;
   cout<<"Enter rollno, name "<<n<<" subject marks";
   // cout<<"Enter rollno, name %d subject marks"<<n;
    for(i=0;i<n;i++)
    {
        cin>>s[i].id;
        cin>>s[i].name;
        cin>>s[i].m1>>s[i].m2>>s[i].m3;
    }
    for(i=0;i<n;i++)
    {
        s[i].grade=(s[i].m1+s[i].m2+s[i].m3)/(n*10);
    }
    for(i=0;i<n;i++)
    {
        cout<<"Rollno Name GPA"<<endl;
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].grade;
        cout<<endl;
    }
    return 0;
}
