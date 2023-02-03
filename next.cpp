#include<iostream>
#include<conio.h>
// #include<string>
using namespace std;
// int cube(int x ,int y , int z);
// int main()
// {
//     int a,b,c;
//     cout<<"Enetr your 3 Sies of Cube : " <<endl;
//     cin >> a >> b >> c;
//     cout << "\nCube is : " << cube(a,b,c);
//     return 0;
// }

// int cube(int x ,int y , int z){
//     return (x*x*x+y*y*y+z*z*z);
// }
float a,b,c,d,e,f,g;
float per(float a);
float per(float a,float b);
float per(float a,float b,float c);

int main (){
    per (a);
    per (a,b);
    per (a,b,c);
    return 0;
    // getch();
}
float per(float a){
    cout << "Enter one side of Square : "<< endl;
    cin >> a;
    // return (4*a);
    float i = 4*a;
    cout << i;
}
float per(float a,float b){
    cout << "Enter L and B side of Rectangle: "<< endl;
    cin >> a,b;
    float i = 4*(a+b);
    cout << i;
    // return 4*(a+b);
}
float per(float a,float b,float c){
    cout << "Enter 3 Sides of Cube : "<< endl;
    cin >> a,b,c;
    // return (a+b+c);
    float i = a+b+c;
    cout << i;
}


    
    