#include<iostream>
#include<conio.h>
using namespace std;

// C++ code to demonstrate void()
// returning void()
// A sample void function
void work()
{
	cout << "The void function has returned "
			" a void() !!! \n";
			
}

// Driver void() returning void work()
void test()
{
	// Returning void function
	cout << "The void function will take value from another void fn "
			" That's void Work()!!! \n";
			
	return work();
}

// Driver Code
int main()
{
	// Calling void function
	test();
	return 0;
}
