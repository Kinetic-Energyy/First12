#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main (){
    int age;
    cout<<"Enter your age :";
    cin >> age;
    if (age > 200 || age < 1)
    {
        cout << "Invalid Age\n";
    }
    else if (age >= 18){
        cout << "You can vote my freind \n";
    }
    else {
        // <"You cannot vote pls leave!";
        cout<<"you cannot vote";
    }
    return 0;
}
