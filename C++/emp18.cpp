#include<iostream>
#include<cstring>
using namespace std;
class employee
{
    private:
        char name[30];
    double wage;
    public:
        void putname(char *n);
        void getname(char *n);
        void putwage(double w);
        double getwage();
};
void employee::putname(char *n)
{
    strcpy(name,n);
}
void employee::getname(char *n)
{
    strcpy(n,name);
}
void employee::putwage(double w)
{
    wage=w;
}
double employee::getwage()
{
    return wage;
}
int main()
{
    employee emp;
    char name[50];
    emp.putname("John Thomas");
    emp.getname(name);
    emp.putwage(75000);
    //ted.getname(name);
    cout << name << " makes $";
    cout << emp.getwage() << " per year.";
return 0;

}
