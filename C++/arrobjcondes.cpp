#include<iostream>
using namespace std;
class array
{
private:
    int size;
    int *ptr;
public:
    Arr(int s);
    void input();
    void multiply();
    ~Arr();
};
Arr::Arr(int s)
{
    size=s;
    ptr=new int[size];

}
int main()
{
    int s;
    cout<<"Enter size of array :"<<endl;
    cin>>s;
    Arr a(s);
    a.input();
    a.multiply();
}
/*
/*Write a C++ program to create an array by using new keyword , insert elements,
  multiply all elements and display result & use  delete keyword to destroy array

sample:
Enter size of array :4
Constructor called
Enter array elements :
1
2
3
4
result:24
Destructor called

#include<iostream>
using namespace std;
class Arr
{
private:
int size;
int *ptr;
public:
Arr(int s);
void input();
void multiply();
~Arr();
};
Arr::Arr(int s)
{
    size=s;
    ptr=new int(size);
    cout<<"Constructor called"<<endl;
}
void Arr::input()
{
    int i;
    cout<<"Enter array elements :"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
}
void Arr::multiply()
{
    int pro=1;
    for(int i=0;i<size;i++)
    {
        pro=pro*ptr[i];
    }
    cout<<"result:"<<pro<<endl;;
}
Arr::~Arr()
{
    delete [] ptr;
    cout<<"Destructor called"<<endl;
}
//Write required code here

int main()
{
	int range;
	cout<<"Enter size of array :"<<endl;
	cin>>range;
	Arr s(range);
	s.input();
	s.multiply();
 }

*/
/*
