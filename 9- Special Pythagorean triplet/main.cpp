#include <cmath>
#include <cstdint>
#include <iostream>

using namespace std;

const uint32_t numberMax = 1000;

int main(void) {
    uint32_t numberSum = 0;
    uint32_t numberA = 1;
    uint32_t numberB = 2;
    uint32_t numberC = 3;
    bool flagDone = false;
    while (flagDone == false) {
        if (numberC < numberMax) {
            numberC++;
        } else if (numberB < numberMax) {
            numberB++;
            numberC = numberB + 1;
        } else if (numberA < numberMax) {
            numberA++;
            numberB = numberA + 1;
            numberC = numberB + 1;
        } else {
            flagDone = true;
        }
        uint32_t squareA = numberA * numberA;
        uint32_t squareB = numberB * numberB;
        uint32_t squareC = numberC * numberC;
        numberSum = numberA + numberB + numberC;

        if (numberSum == 1000) {
            if (squareC == (squareA + squareB)) {
                cout << "a: " << numberA << endl;
                cout << "b: " << numberB << endl;
                cout << "c: " << numberC << endl;
                cout << "abc = " << numberA * numberB * numberC << endl;
                cout << "============" << endl;
                flagDone = true;
            }
        }
    }
    return 0;
}