#include<iostream>
using namespace std;

class drop{
	public:
	 void show()
		{cout<<"Base Class" << endl;}
};

class hot : public drop{
	public:
		void show()
		{cout<<"Derived Class";}
};

int main(){
	drop *bptr; hot weed;
	bptr = &weed;
	bptr->show();
	return 0;
}
