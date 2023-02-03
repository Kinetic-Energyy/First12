#include<iostream>
#include<conio.h>
using namespace std;
class demon{
    int a;
    public:
    void get(void)
    {
        cout <<"Enter an INT ---> \n";
        cin >> a;
    }
    void dis(void)
    {
        cout <<"Value = " << a <<endl;
        
    }
    demon operator+ (demon bb)
    {
        demon temp;
        temp.a = a + bb.a;
        return (temp);
    }

};
//             cc = aa + bb where all are objs of a class 
/*
as we are calling/Refering from a and overloading + giving an argument as b and storing it in C as an Datatype.
*/
    int main()
    {
        demon aa, bb, cc;
        aa.get(); bb.get();
        aa.dis(); bb.dis();
        cc = aa + bb;
        cc.dis();
        return 0;
    }
