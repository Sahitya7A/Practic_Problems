// C++ program to illustrate call-by-value in C++

#include <iostream>
using namespace std;
//Pass-by-Value
int square1(int n)
{
	//Address of n in square1() is not the same as n1 in main()
	cout << "address of n1 in square1(): " << &n << "\n";

	// clone modified inside the function
	n *= n;
	return n;
}
void test()
{
	//Call-by-Value
	int n1=8;
	cout << "address of n1 in main(): " << &n1 << "\n";
	cout << "Square of n1: " << square1(n1) << "\n";
	cout << "No change in n1: " << n1 << "\n";

}
//Driver program
int main()
{
	test();
}
