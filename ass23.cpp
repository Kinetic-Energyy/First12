#include<iostream>
#include<conio.h>
using namespace std;
class sample{
    int a,b;
    public:
        void val(int f, int g)
        {a = f; b = g;}
    friend float mean (sample s);};
    float mean (sample s)
    {return (s.a + s.b / 2.0);}

    int main()
    {
        // int x , z;
        // cout<<"Enter x and z : ";
        // cin >> x >> z;
        sample y;
        y.val(3, 3);
        return 0;
    }
