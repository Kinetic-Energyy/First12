#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    float basic_salary, dallowance, house_rent, gross_salary;
    cout << " Enter your Basic Salary : ";
    cin >> basic_salary;

    dallowance = basic_salary * 0.4 ;
    house_rent = basic_salary * 0.2 ; 
    gross_salary = basic_salary + dallowance + house_rent ;
    cout << " Your Dearnance allowance is " << dallowance <<endl <<" Your House Rent is " << house_rent << "\n";
    cout << " Your Gross Salary is " << gross_salary  ;
    return 0;
}