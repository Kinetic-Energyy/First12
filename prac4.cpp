// #include <iostream>
// using namespace std;

// class Base {
//   private:
//     int a = 1;

//   protected:
//     int b = 2;

//   public:
//     int c = 3;

//     int pri() {
//       return a;
//     }
// };

// class derived : private Base {
//   public:
//     int pro() {
//       return b;
//     }

//     int pub() {
//       return c;
//     }
// };

// int main() {
//     cout<<"Kumar Manisk\n";
//     cout <<"Roll No : 43\n";
//     derived obj;
//     cout << "Private cannot be accessed!" << endl;
//     cout << "Protected = " << obj.pro() << endl;
//     cout << "Public = " << obj.pub() << endl;
//     return (0);
// }

// C++ program to demonstrate
// protected access modifier
// #include <bits/stdc++.h>
// using namespace std;
// class base
// {
// 	protected:
// 	int a;
// 	};
// class derived : public base
// {
// 	public:
// 	void assign(int id)
// 	{
// 		a = id;
// 	}
// 	void display()
// 	{ cout << "a is: " << a << endl;}};
// int main() {
// 	derived obj1;
// 	obj1.assign(81);
// 	obj1.display();
// 	return 0;
// }

#include <iostream>
using namespace std;
class A{
	public:
	int x;
	char place[50];
	void print()
	{	
		cout << "Enter How many Name's of Places you have to Enter :\n";
		cin >> x;
		for (int i = 0; i < x; i++)
		{cout<<"Enter name of a Place";
		cin.get(place,50);}

	}
};
class B {
	public :
	char place[50];
	int x;
	void print()
	{	
		cout << "Enter How many Name's of Places you have to Enter :\n";
		cin >> x;
		for (int i = 0; i < x; i++)
		{cout<<"Enter name of a Place";
		cin.get(place,50);}

	}
};
class C : public A , public B{
	public:
	cout << "This is Derived from A and B";
};

int main (){
	C obj;
	obj.print();
	return 0;
}
