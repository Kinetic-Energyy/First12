#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    float meters,feets,inches,distance ;
    long double cm;
    cout << " Enter Distance between two Cities (in km) : " ;
    cin >> distance;
    meters = distance  * 1000;
    feets = distance * 3281;
    inches = distance * 39370;
    cm = distance * 100000;
    cout << " The distance in meters is " <<meters <<"\t"<<"m" <<endl;
    cout << " The distance in feets is " <<feets<<"\t"<<"ft"<<endl;
    cout << " The distance in iches is " <<inches<<"\t"<<"in"<<endl;
    cout << " The distance in Centimeter is " <<cm <<"\t"<<"cm";
    return 0;
}