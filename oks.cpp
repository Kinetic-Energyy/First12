#include<iostream>
#include<conio.h>

using namespace std;
  
class num
{
   private:
   void result()
   {
    if (a > b && a > c)
    {
        cout<<a <<" is the greatest Number\n";
    }
    else if (b > a && b > a)
    {
        cout<<b <<" is the greatest Number\n";
    }
    else{
        cout<<c <<" is the greatest Number\n";
    }   
   }
   public:
   int a , b , c;
   void accept()
   {
    cout <<"Kumar Manisk\n"
    <<"Roll no : 43 \n";
    cout <<"Enter 3 Numbers : \n";
    cin >> a >> b >> c;
    show();
    result();
   }
   void show(){
    cout <<"Your Entered Numbers are the Following : ";
    cout << a ;
    cout << b ; 
    cout << c ;
   }
};
int main()
{   
    
    num a;
    a.accept();
    return 0;
}