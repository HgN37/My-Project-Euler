/* main.c
 * Main source file to solve Project Euler's problem 3
 * Author: HgN
 * Day: May 29th, 2017
 */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

const uint64_t givenNumber = 600851475143;
uint64_t factorNumber = 2;

int main(void) {
    bool flag = false;
    uint8_t count = 0;
    uint64_t tempNumber = givenNumber;
    while (tempNumber != 1) {
        while ((tempNumber % factorNumber) == 0) {
            tempNumber = tempNumber / factorNumber;
            flag = true;
            count++;
        }
        if (flag == true) {
            printf("%" PRIu64 "^%i\n", factorNumber, count);
            flag = false;
            count = 0;
        }
        factorNumber++;
    }
    printf("Largest prime factor: %" PRIu64 "\n", factorNumber - 1);
    return 0;
}