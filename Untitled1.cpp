#include <iostream> 
#include <stdio.h> 
using namespace std; 
class base{
	public:
		virtual void show()
		{cout<<"Virtual Function to be Overriden by derived class\n"}
		void dis()
		{cout<<"Base Class Normal Function \n"}
};
class derived : public base{
	public:
		void show(){
			cout<<"Virtual function Overriden by derived class ";
		}
		void dis()
		{cout<<"Derived Class Normal Function \n"}
};
int main() 
{ 
  
 return 0; 
} 
