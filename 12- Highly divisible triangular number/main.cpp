#include <cmath>
#include <cstdint>
#include <iostream>
using namespace std;

#define DIVISOR_NEED 500
#define PRIME_COUNT_MAX 2000

uint32_t primeTable[PRIME_COUNT_MAX];

bool primeCheck(uint32_t pNumber) {
    bool isPrime = true;
    uint32_t divisorMax;
    uint32_t divisor = 2;
    divisorMax = (uint32_t)sqrt(pNumber);
    while (divisor <= divisorMax) {
        if ((pNumber % divisor) == 0) {
            isPrime = false;
            break;
        }
        divisor++;
    }
    return isPrime;
}

void primeList() {
    uint32_t primeCount = 2;
    uint32_t primeCandidate = 1;
    primeTable[0] = 2;
    primeTable[1] = 3;
    while (primeCount <= PRIME_COUNT_MAX) {
        primeCandidate += 4;
        if (primeCheck(primeCandidate) == true) {
            primeTable[primeCount] = primeCandidate;
            primeCount++;
        }
        if (primeCount > PRIME_COUNT_MAX) {
            break;
        }
        primeCandidate += 2;
        if (primeCheck(primeCandidate) == true) {
            primeTable[primeCount] = primeCandidate;
            primeCount++;
        }
    }
}

int main(int agrc, char *argv[]) {
    uint32_t divisorCount = 1;
    uint32_t divisorPrimeCount = 0;
    uint32_t numberTriangleIndex = 1;
    uint32_t numberTriangle;
    uint32_t primeIndex = 0;
    primeList();
    cout << "Prime table finished!" << endl;
    while (divisorCount <= DIVISOR_NEED) {
        divisorCount = 1;
        primeIndex = 0;
        numberTriangle = numberTriangleIndex * (numberTriangleIndex + 1) / 2;
        while (numberTriangle != 1) {
            divisorPrimeCount = 0;
            while ((numberTriangle % primeTable[primeIndex]) == 0) {
                divisorPrimeCount++;
                numberTriangle = numberTriangle / primeTable[primeIndex];
            }
            divisorCount *= (divisorPrimeCount + 1);
            primeIndex++;
        }
        numberTriangleIndex++;
    }
    numberTriangleIndex--;
    numberTriangle = numberTriangleIndex * (numberTriangleIndex + 1) / 2;
    cout << "First triangle number having over 500 divisors: " << numberTriangle
         << endl;
    return 0;
}
