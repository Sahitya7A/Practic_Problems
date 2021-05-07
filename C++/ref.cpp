// C++ program to illustrate call-by-reference in C++

#include <iostream>
using namespace std;
//Pass-by-Reference with Pointer Arguments
void square2(int *n)
{
	//Address of n in square2() is the same as n2 in main()
	cout << "address of n2 in square2(): " << n << "\n";

	// Explicit de-referencing to get the value pointed-to
	*n *= *n;
}
void test()
{
	//Call-by-Reference with Pointer Arguments
	int n2=8;
	cout << "address of n2 in main(): " << &n2 << "\n";
	square2(&n2);
	cout << "Square of n2: " << n2 << "\n";
	cout << "Change reflected in n2: " << n2 << "\n";
}
//Driver program
int main()
{
	test();
}
