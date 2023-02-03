#include <iostream>
#include <conio.h>
using namespace std;
#define PI 3.14

int main()
{
    float r, v;
    cout << "Kumar Manisk" << endl;
    cout << "Enter the Radius of Sphere : ";
    cin >> r;
    v = PI * r * r * r;
    cout << "volume of Sphere is " << v;
    return 0;
}