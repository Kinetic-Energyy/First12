#include <iostream> 
#include <stdio.h> 
using namespace std; 
class employee
{ 
    public: 
    int empid, salary; 
    char empempname[35]; 
    int accept() 
{ 
    char empname[35]; 
    cout<<"Enter Your empname : ";  
    cin >> empname; 
    cout<<"Enter Your Employee ID : \n"; 
    cin >> empid; 
    cout << "Enter Your Salary : \n"; 
    cin >> salary; 
    return 0; 
 } 
    int display() 
{ 
    cout<<"Your Details is as follows : \n"; 
    char empname[35];
    cout<<"empempname = "<< empname << endl; 
    cout<<"Employee ID = "<<empid << endl; 
    cout<<"Salary = "<<salary << endl; 
    return 0; 
} }; 

int main() 
{ 
 employee a; 
 a.accept(); 
 a.display(); 
 return 0; 

} 
