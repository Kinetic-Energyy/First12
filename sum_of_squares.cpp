#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int n, sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}