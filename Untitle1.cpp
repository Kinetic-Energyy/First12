#include <iostream>
using namespace std;
template <typename T> // or <class T>

void display(T t1)
{cout << "Using Actual Template: "<< t1 << "\n";}

void display(int t1)
{cout << "Pre-Defined Parameters: "<< t1 << "\n";}

int main()
{	cout<<"Kumar Manisk\n" <<"Roll No: 43\n";
	display(200);
	display(230.092);
	display('F');
	return 0;}


