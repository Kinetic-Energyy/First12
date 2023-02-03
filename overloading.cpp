#include<iostream>
#include<conio.h>
using namespace std;

int sum (int a ,int b);
int sum (float a,float b);
int sum (double a,double b);
int x,y;

int main(){
    // cout<<"OK"<<endl;
    cout<<"Enter 2 Numbers : ";
    cin >> x >> y;
    // system("pause>0"); Only for Windows
    cout<<sum(x,y);
}

int sum (int a ,int b){
    return a + b;
}
int sum (float a, float b){
    return a*b;
}
int sum (double a,double b){
    return a*a+b*b;
}