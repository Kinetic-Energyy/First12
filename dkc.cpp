#include <iostream>
using namespace std;
class base{
    protected:
    int g;
    public:
        void print()
        {cout<<"Class A\n";}
};
class derived1: public base{
    public:  
        derived1(){
            g = 1;
        }
        void print()
        {cout<<"Class B\n";}
};
class derived2 : public base
{   public:
    derived2()
    {g = 2;}
};
class derived3 : public derived1 , public derived2{
    public:
        void disp(){
            cout<<"The Value is : "<<g;
    }
};
int main()
{
    derived3 ok;
    ok.disp();
    return 0;
}