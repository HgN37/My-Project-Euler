#include <cmath>
#include <cstdint>
#include <iostream>

using namespace std;

bool isPrime(uint32_t numberGiven) {
    uint32_t numberCheck;
    uint32_t numberCheckMax = sqrt(numberGiven) + 1;
    bool flagIsPrime = true;
    for (numberCheck = 2; numberCheck < numberCheckMax; numberCheck++) {
        if ((numberGiven % numberCheck) == 0)
            flagIsPrime = false;
    }
    return flagIsPrime;
}

int main(void) {
    uint32_t index = 1;
    uint32_t numberGiven = 0;
    while (index != 10001) {
        if (isPrime(numberGiven - 1) == true) {
            index++;
            cout << "So nguyen to thu " << index << " la: " << numberGiven - 1
                 << endl;
        }
        if (isPrime(numberGiven + 1) == true) {
            index++;
            cout << "So nguyen to thu " << index << " la: " << numberGiven + 1
                 << endl;
        }
        numberGiven += 6;
    }
    cout << "10001st prime: " << numberGiven - 1 << endl;
    return 0;
}