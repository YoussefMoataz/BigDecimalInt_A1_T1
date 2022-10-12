#include "BigDecimalIntFunctions.cpp"

int main() {

    BigDecimalInt bI1("999");
    BigDecimalInt bI8("+00999");
    BigDecimalInt bI2(-88);
    BigDecimalInt bI3("-254");
    BigDecimalInt bI4("+254");
    BigDecimalInt bI5("254");
    BigDecimalInt bI9("-00254");

    BigDecimalInt bI6;
    bI6.setDecimalStr("5308");

//    bI2 = bI1;

    cout << bI1 << endl;
    cout << bI8 << endl;
    cout << bI2 << endl;
    cout << bI3 << endl;
    cout << bI4 << endl;
    cout << bI5 << endl;
    cout << bI6 << endl;
    cout << bI9 << endl;
    cout << bI8.sign() << endl;


    if (bI5 > bI4) {
        cout << "Yes" << endl;
    } else {
        cout << "no" << endl;
    }

    BigDecimalInt bI7 = bI4 + bI9;
    cout << bI7 << endl; // 0
    cout << bI1 - bI8 << endl;
    cout << bI3 + bI5 << endl;
    cout << bI5 + bI3 << endl;
    cout << bI5 - bI3 << endl;
    cout << bI1 + bI4 << endl;

    return 0;
}
