#include<iostream>
#include<conio.h>
// #include <stdc++.h>
using namespace std;

int sum(int a , int b)
{
    return a+b;
}
int sum(int a , int b, int c)
{
    return a+b+c;
}
float volume(float f){
    return (f*f*f);
}
int main(){
    cout<<"Sum of 6 and 4 is :"<< sum(6,4)<<endl;
    cout<<"Sum of 6 , 1 and 4 is :"<< sum(6,4,1);
    float o;
    cout<<"\nEnter Side of Cube : ";
    cin>>o;
    cout<<"Your Volume is : "<<volume(o);
    return 0;
}

