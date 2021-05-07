// C++ program to illustrate call-by-reference  with reference arguments in C++

#include <iostream>
using namespace std;
//Pass-by-Reference with Reference Arguments
void square3(int &n)
{
	//Address of n in square3() is the same as n3 in main()
	cout << "address of n3 in square3(): " << &n << "\n";

	// Implicit de-referencing (without '*')
	n *= n;
}
void test()
{	//Call-by-Reference with Reference Arguments
	int n3=8;
	cout << "address of n3 in main(): " << &n3 << "\n";
	square3(n3);
	cout << "Square of n3: " << n3 << "\n";
	cout << "Change reflected in n3: " << n3 << "\n";
}
//Driver program
int main()
{
	test();
}
