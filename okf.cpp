#include<iostream>
using namespace std;
class space
{ int x, y, z ;
	public :
		void getdata(int a, int b, int c)
				{x=a ; y=b; z=c ;}
void display( )
{
cout<<"x : "<< x << endl;
cout<<"y : "<< y << endl;
cout<<"z : "<< z << endl;
}
void operator-( )
	{x=-x ; y=-y ; z=-z ;}
};
int main()
{
cout<<"Name: Kumar Manisk Gaurav\n" ;
space s ;
s.getdata(3,4,-7) ;
s.display( ) ;
-s ;
s.display( ) ;
return 0 ;
}
