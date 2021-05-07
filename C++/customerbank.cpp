#include<iostream>
#include<cstdlib>
using namespace std;
class customer
{
private:
    int id;
    char name[20];
    double balance,balance1,wtamt;
    double basic_balance=500;
public:
    void get_data()
    {
        cout<<"Enter customer ID:";
        cin>>id;
        cout<<"Enter customer Name:";
        cin>>name;
        cout<<"Enter customer account balance:";
        cin>>balance;
     //   balance1=balance;
    }
    void deposit()
    {
        cout<<"Enter amount to be deposited:";
        cin>>balance1;
        balance=balance+balance1;
        current_balance();
    }
    void current_balance()
    {
        try{
        if(balance < basic_balance)
        {
            throw"NOT ALLOWED Account Balance is less than 500\n";
        }
        else
        {
            cout<<"Account's current Balance is:";
            cout<<balance<<endl;
        }
        }
        catch(const char *x)
        {
            cout<<x;
        }
    }
    void withdraw()
    {
        cout<<"Enter amount to be withdrawn:";
        cin>>wtamt;
        try{
        if(wtamt > balance)
        {
            throw"INSUFFICIENT FUNDS\n";
        }
        else if(balance-wtamt < basic_balance)
        {
            throw"NOT ALLOWED Account Balance will be less than 500\n";
        }
        else
        {
            balance=balance-wtamt;
            current_balance();
        }
        }
        catch(const char *x)
        {
            cout<<x;
        }
    }
    void statement()
    {
        cout<<"Customer Name:"<<name<<endl;
        cout<<"Customer ID:"<<id<<endl;
        cout<<"Customer Account Balance:"<<balance<<endl;
    }
};
int main()
{
    customer c;
    int ch;
    char s;
    do
        {
        cout<<"1.Enter Customer details\n2.Deposit Amount\n3.Withdraw Amount\n4.Check Account Balance\n5.Bank Statement\n";
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            c.get_data();
            break;
        case 2:
            c.deposit();
            break;
        case 3:
            c.withdraw();
            break;
        case 4:
            c.current_balance();
            break;
        case 5:
            c.statement();
            break;
        }
        cout<<"Do you want to continue:";
        cin>>s;
    }while(s=='Y'||s=='y');
    return 0;
}
