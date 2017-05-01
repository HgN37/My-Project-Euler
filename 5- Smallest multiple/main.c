/* main.c
 * Main source file to solve Project Euler's problem 5
 * Author: HgN
 * Day: May 1st, 2017
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {
    uint32_t numberSmallestProduct;
    numberSmallestProduct = 20 * 18 * 14 * 11 * 13 * 19 * 17;
    printf("The smallest number: %i\n", numberSmallestProduct);
    return 0;
}