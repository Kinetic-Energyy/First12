#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class hood{
    int roll,total_marks;
    public:
    void getdata(){
        cout<<"Enter your Roll no : ";
        cin >> roll;
        cout<<"\nEnter your Total Marks : ";
        cin >> total_marks;
    }
    void display();
};
void hood :: display(){
    cout<<"Your Roll number is : "<< roll<<endl;
    cout<<"Your Total Marks is : "<< total_marks;

}
int main(){

    hood nigga;
    nigga.getdata();
    nigga.display();

    return 0;
}