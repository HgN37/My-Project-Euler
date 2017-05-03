#include <cmath>
#include <cstdint>
#include <fstream>
#include <iostream>

using namespace std;

uint8_t number1000Digit[1000];

int main(void) {
    fstream number;
    number.open("number.txt", ios::in);
    uint32_t index;
    uint32_t save;
    uint32_t from;
    uint32_t count;
    uint64_t productMax = 1;
    uint64_t productTemp = 1;
    for (index = 0; index < 1000; index++) {
        number >> number1000Digit[index];
    }
    for (index = 0; index < 1000; index++) {
        number1000Digit[index] -= 0x30;
    }
    index = 0;
    bool flagZero = false;
    while (index < 1000 - 13) {
        for (count = index; count < index + 13; count++) {
            if (number1000Digit[count] == 0) {
                flagZero = true;
                save = count;
            }
        }
        if (flagZero == false) {
            for (count = index; count < index + 13; count++) {
                productTemp = productTemp * (uint64_t)number1000Digit[count];
            }
            if (productTemp > productMax) {
                productMax = productTemp;
                from = index;
            }
            index++;
        } else
            index = save + 1;
        productTemp = 1;
        flagZero = false;
    }
    cout << "Max product: " << productMax << endl;
    cout << "Start from digit " << from << endl;
    for (count = from; count < from + 13; count++) {
        cout << (uint64_t)number1000Digit[count] << " ";
    }
    cout << endl;
    return 0;
}