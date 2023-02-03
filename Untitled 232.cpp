#include<iostream>
using namespace std;
#include<fstream>
class item
{
static int count ;
int number ;
public :
void getdata(int a)
{
number = a ;
count ++;
}
void display( )
{
cout<<"\nCount : "<<count<<endl ;
}
};
int item::count ;
int main( )
{
cout<<"Name: Kumar Manisk Gaurav\n" ;
item a , b , c ;

a.display( ) ;
b.display( ) ;
c.display( ) ;
a .getdata (100) ;
b .getdata (200) ;
c .getdata (300) ;
cout<<"\nAfter reading data\n" ;
a.display( ) ;
b.display( ) ;
c.display( ) ;
return 0;
}
