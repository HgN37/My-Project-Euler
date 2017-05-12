#include <cmath>
#include <cstdint>
#include <fstream>
#include <iostream>
using namespace std;

#define NUMBERS 100
#define DIGITS 50

fstream fileNumber;
uint8_t number[NUMBERS][DIGITS];
uint32_t numberIndex = 0;
uint32_t digitIndex = 0;
uint32_t tempSum;
uint32_t tempNote;

int main(int argv, char *argc[]) {
    fileNumber.open("number.txt", ios::in);
    while (numberIndex < NUMBERS) {
        while (digitIndex < DIGITS) {
            fileNumber >> number[numberIndex][digitIndex];
            number[numberIndex][digitIndex] =
                number[numberIndex][digitIndex] - 0x30;
            digitIndex++;
        }
        digitIndex = 0;
        numberIndex++;
    }
    digitIndex = 49;
    while (digitIndex > 0) {
        tempSum = 0;
        for (numberIndex = 0; numberIndex < NUMBERS; numberIndex++) {
            tempSum += number[numberIndex][digitIndex];
        }
        tempSum += tempNote;
        tempNote = tempSum / 10;
        cout << digitIndex << " >> " << (uint32_t)(tempSum % 10) << endl;
        digitIndex--;
    }
    tempSum = 0;
    for (numberIndex = 0; numberIndex < NUMBERS; numberIndex++) {
        tempSum += number[numberIndex][0];
    }
    tempSum += tempNote;
    cout << tempSum << endl;
    return 0;
}