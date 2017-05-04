#include <cmath>
#include <cstdint>
#include <iostream>

using namespace std;

const uint64_t numberMax = 2000000; // 2 milions

bool isPrime(uint64_t numberGiven) {
    uint64_t numberCheck;
    uint64_t numberCheckMax = sqrt(numberGiven) + 1;
    bool flagIsPrime = true;
    for (numberCheck = 2; numberCheck < numberCheckMax; numberCheck++) {
        if ((numberGiven % numberCheck) == 0)
            flagIsPrime = false;
    }
    return flagIsPrime;
}

int main(void) {
    uint64_t sum = 5; // Skip 2 and 3
    uint64_t k = 1;
    bool flagDone = false;
    while (flagDone == false) {
        if ((6 * k - 1) >= numberMax)
            flagDone = true;
        if (flagDone == false)
            if (isPrime(6 * k - 1) == true) {
                cout << "+ " << 6 * k - 1 << endl;
                sum += (6 * k - 1);
            }
        if ((6 * k + 1) >= numberMax)
            flagDone = true;
        if (flagDone == false)
            if (isPrime(6 * k + 1) == true) {
                cout << "+ " << 6 * k + 1 << endl;
                sum += (6 * k + 1);
            }
        k++;
    }
    cout << "Tong: " << sum << endl;
    return 0;
}