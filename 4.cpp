#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float a , b ; 
    cout << "Enter a Number --> ";
    cin >> a;
    cout << "Enter another Number --> ";
    cin >> b;

    if ( a > b)
    {
        cout<< a <<" is greater number than " << b ;
    }
    if (b > a)
    
    {
        cout<< b <<" is greater number than " << a ;
    }

    else 
    {
        cout << " Both Entered Numbers are Same ";
    }
    return 0;
}