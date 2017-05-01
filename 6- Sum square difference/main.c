/* main.c
 * Main source file to solve Project Euler's problem 3
 * Author: HgN
 * Day: May 1st, 2017
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint32_t numberSquareOfSum = 0;
uint32_t numberSumOfSquare = 0;
uint32_t numberDifference;

int main(void) {
    int loop;
    for (loop = 1; loop < 101; loop++) {
        numberSumOfSquare += (loop * loop);
    }
    for (loop = 1; loop < 101; loop++) {
        numberSquareOfSum += loop;
    }
    numberSquareOfSum = numberSquareOfSum * numberSquareOfSum;
    numberDifference = numberSquareOfSum - numberSumOfSquare;
    printf("The difference: %i\n", numberDifference);
    return 0;
}