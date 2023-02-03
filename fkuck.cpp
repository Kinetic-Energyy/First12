#include<iostream>
using namespace std;
class base
{
    private:
    int b,a;
    public:
    void pop()
    {
        cout <<"Base Class\n";
        int t, o;
        t = a;
        o = b;
    }
};
class derived : private base{
    private:
    int x;
    public:
    void top()
    {
        cout << "Derived Class out of base class privately\n";
        int sum = t + o;
    }

};
int main ()
{
cout<<"Kumar Manisk\n";
cout <<"Roll No : 43\n";
derived op;
op.top();
return(0);
}
