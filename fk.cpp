#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class employee{
    public:
    int empid, salary;
    char empempname[10];
    void accept()
    {
        cout<<"Enter Your empname : "; 
         cin >> empname[];
        cout<<"Enter Your Employee ID : \n";
        cin >> empid;
        cout << "Enter Your Salary : \n";
        cin >> salary;
    }
    void display()
    {
    cout<<"Your Details is as follows : \n";
    cout<<"empempname = "<< empempname[10] << endl;
    cout<<"Employee ID = "<<empid << endl;
    cout<<"Salary = "<<salary << endl;
}
};
int main()
{
    employee a;
    a.accept();
    a.display();
    return 0;
}