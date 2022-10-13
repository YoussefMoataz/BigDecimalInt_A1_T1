#include "BigDecimalIntFunctions.cpp"

int main() {

    // Test cases 1
    BigDecimalInt bI1("999");
    // Test cases 2
    BigDecimalInt bI2(-88);
    // Test cases 3
    BigDecimalInt bI3("-254");
    // Test cases 4
    BigDecimalInt bI4("+254");
    BigDecimalInt bI5("254");
    // Test cases 5
    BigDecimalInt bI6;
    bI6.setDecimalStr("5308");
    // Test cases 6
    BigDecimalInt bI8("+00999");
    // Test cases 7
    BigDecimalInt bI9("-00254");

    // Test cases 8
    bI2 = bI1;


    // Test cases 9-16
    cout << bI1 << endl;
    cout << bI2 << endl;
    cout << bI3 << endl;
    cout << bI4 << endl;
    cout << bI5 << endl;
    cout << bI6 << endl;
    cout << bI8 << endl;
    cout << bI9 << endl;

    // Test cases 17
    cout << bI8.sign() << endl;


    // Test cases 18
    if (bI5 > bI4) {
        cout << "Yes" << endl;
    } else {
        cout << "no" << endl;
    }

    // Test cases 26
    if (bI8 > bI3) {
        cout << "Yes" << endl;
    } else {
        cout << "no" << endl;
    }

    // Test cases 19
    BigDecimalInt bI7 = bI4 + bI9;
    cout << bI7 << endl;

    // Test cases 20-25
    cout << bI1 - bI8 << endl;
    cout << bI3 + bI5 << endl;
    cout << bI5 + bI3 << endl;
    cout << bI5 - bI3 << endl;
    cout << bI1 + bI4 << endl;
    cout << bI3 - bI9 << endl;

    return 0;
}
