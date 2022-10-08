#include "BigDecimalIntFunctions.cpp"

int main() {

    BigDecimalInt bI1("999");
    BigDecimalInt bI2(-88);
    BigDecimalInt bI3("-254");
    BigDecimalInt bI4("+254");
    BigDecimalInt bI5("254");

//    bI2 = bI1;

    cout << bI1 << endl;
    cout << bI2 << endl;
    cout << bI3 << endl;
    cout << bI4 << endl;
    cout << bI5 << endl;
    cout << bI1.sign();

    return 0;
}