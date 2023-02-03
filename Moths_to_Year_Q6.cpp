#include <iostream>
#include <conio.h>
using namespace std;

main() 
{
    int a;
    cout << " Enter Month Number : " ; 
    cin >> a;
    
    if (a == 1)
    {
        cout<<" The Month is Jan";
    }
    else if (a == 2)
    {
        cout<<" The Month is Feb";
    }
    else if (a == 3)
    {
        cout<<" The Month is March";
    }  if (a == 4)
    {
        cout<<" The Month is April";
    }
    else if (a == 5)
    {
        cout<<" The Month is May";
    }
    else if (a == 6)
    {
        cout<<" The Month is June";
    }
    else if (a == 7)
    {
        cout<<" The Month is July";
    }
    else if (a == 8)
    {
        cout<<" The Month is Aug";
    }
    else if (a == 9)
    {
        cout<<" The Month is Sep";
    }
    else if (a == 10)
    {
        cout<<" The Month is Oct";
    }
    else if (a == 11)
    {
        cout<<" The Month is Nov";
    }
    else if (a == 12)
    {
        cout<<" The Month is December";
    }

    else
    {
        cout<<" Please Enter Right Value ";
        cout<<endl <<" Right Value is from 1 - 12 " ;
    }
    getch();
    }