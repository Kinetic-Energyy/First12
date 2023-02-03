#include<iostream>
#include<conio.h>
using namespace std;
void test (int s){
    try
    {
        if (s == 1)
        {
            throw s;

        }
        else if (s == 0)
        {
            throw 's';
        }
        else if (s == -1)
        {
            throw (1.0);
        }
        else{
            cout <<"NO INPUT !\n";
        }
    }
    catch (char c){
        cout <<"Caught a Character!\n" ;
    }
    catch (int c)
    {
        cout <<"Caught a Integer!\n" ;
    }
    catch (double c)
    {
        cout <<"Caught a Double!\n" ;
    }
    cout <<"IN FUNCTION OUTSIDE TRY CATCH BLOCK!\n";
}
 int main(){
    
    int x , y ,z ;
    cout <<"ENter 3 values : ";
    cin >> x >> y >> z;
    test(x);
    test(y);
    test(z);
    return 0;
}