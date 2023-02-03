#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main() 
{
    int i=0,x,y,a;
    cout << "Enter how many Numbers you want to enter : ";
    cin >> x;
    while ( i < x)
    {
    cout << "Enter your numbers : " "\n";
    cin >> y;
        a = y++;
        y = i / x;
        i++;
        cout << y;
    }
    return 0;
    
}