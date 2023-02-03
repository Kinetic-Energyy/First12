#include<iostream>
using namespace std;
class A{
	public:
		int x , y;
		A(int a , int b)
		{x = a; y = b;}
		void dis();
	A(){};
		A (A &O){
		x = O.x;
		y = O.y;
		cout<<"Copy X an\ad Y Values = "<<x << y<<"\n";
//		cout<<"Copy Constructor!\n";
	}
};
void A :: dis(){
	cout <<" Base X = "<<x<<endl;
	cout <<"Base Y = "<<y<<endl;
}

int main()
{
	A obj(2,4);
	obj.dis();
	A obj1(obj);
	obj1.dis();	
	return 0;
}

