/* main.c
 * Main source file to solve Project Euler's problem 2
 * Author: HgN
 * Day: April 28th, 2017
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint32_t finalSum = 0;
uint32_t fibonacciNumTemp1 = 1;
uint32_t fibonacciNumTemp2 = 1;
uint32_t fibonacciCurrentNum = 2;
const uint32_t fibonacciMaxNum = 4000000;

int main(void) {
    while (fibonacciCurrentNum < fibonacciMaxNum) {
        printf("number = %i", fibonacciCurrentNum);
        printf("\n");
        finalSum += fibonacciCurrentNum;
        int loop;
        for (loop = 0; loop < 3; loop++) {
            fibonacciNumTemp1 = fibonacciNumTemp2;
            fibonacciNumTemp2 = fibonacciCurrentNum;
            fibonacciCurrentNum = fibonacciNumTemp1 + fibonacciNumTemp2;
        }
    }
    printf("finalSum = %i", finalSum);
    printf("\n");
    return 0;
}