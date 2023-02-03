#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
class employee
{
public:
    int empid, salary;
    char empempname[35];
    int accept(int a , char b[15] , float c)

    {

        return 0;
    }

    int display()

    {

        cout << "Your Details is as follows : \n";

        cout << "empempname = " << empempname << endl;

        cout << "Employee ID = " << empid << endl;

        cout << "Salary = " << salary << endl;

        return 0;
    }
};

int main()

{

    employee a;
    a.accept(43,"Manisk",35242.25);

    a.display();

    return 0;
}