#include<iostream>
#include<conio.h>
using namespace std;

class sam{
    int a , b, c;
    public:
        void value(int x , int y, int z){
            cout<<"Answer = \n" ; }
        friend int sub (sam o);};

    int sub(sam s)
    {return (s.a*s.a - s.b*s.b - s.c * s.c);}

     main()
    {
        sam p;
        p.value(2,1,1);
        cout<<"Result = " << sub(p);
        getch();
    }
    
