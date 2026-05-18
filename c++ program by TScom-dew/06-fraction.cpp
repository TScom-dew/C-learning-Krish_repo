#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // float has about 7 digits precision

    float number1{1234567};

    cout << "number1 : " << number1 << endl;

    // setprecision() controls the total significant digits displayed

    cout << setprecision(7);
    cout << "number1 with setprecision(7) : " << number1 << endl;


    // Large floating-point values may print in scientific notation

    float bigNumber{123456789.0f};

    cout << "bigNumber : " << bigNumber << endl;


    // Brace initialization prevents narrowing conversion

    // float number2{123456789};
    // Error:
    // narrowing conversion from 'int' to 'float'


    // Function initialization allows implicit conversion

    float number3(123456789);

    cout << "number3 : " << number3 << endl;


    // Assignment initialization also allows implicit conversion

    float number4 = 123456789;

    cout << "number4 : " << number4 << endl;


    // double has much higher precision (~15 digits)

    double number5{123456789};

    cout << "number5 : " << number5 << endl;

    return 0;
}
