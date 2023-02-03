#include <iostream>
using namespace std;

class B{
	public:
		virtual void f1(void){
			cout<<"Base Class's Virtual Function\n";
		}
};
class C : public B{
	void f1(){
		cout<<"Derived Class Overriding of Function\n";
	}
};
int main {
B *base_ptr;
C obj_c;
base_ptr = &obj_c;
base_ptr->f1();
return 0;}
