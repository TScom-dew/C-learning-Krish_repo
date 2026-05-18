#include<iostream>
using namespace std;

int main(){

    // int number1{12.5};// it gives error

    int number2(12.5);

    cout << "number2 : " << number2 << endl;

    int number3 = 12.5;

    cout << "number3 : " << number3 << endl;

    /* Note: Brace initialization is safer than function and assignment initialization. */
    return 0;
}
