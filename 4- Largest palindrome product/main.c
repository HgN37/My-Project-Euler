/* main.c
 * Main source file to solve Project Euler's problem 4
 * Author: HgN
 * Day: May 1st, 2017
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

uint32_t numberLargestPalindrome = 0;
uint32_t numberProduct = 1;
uint32_t numberFactor_1 = 999;
uint32_t numberFactor_2 = 999;

bool palindromicTest(uint32_t pNumber);

int main(void) {
    uint32_t factor1, factor2;
    while (numberFactor_1 > 99) {
        while (numberFactor_2 > 99) {
            numberProduct = numberFactor_2 * numberFactor_1;
            if (numberProduct > numberLargestPalindrome)
                if (palindromicTest(numberProduct) == true) {
                    numberLargestPalindrome = numberProduct;
                    factor1 = numberFactor_1;
                    factor2 = numberFactor_2;
                }
            numberFactor_2--;
        }
        numberFactor_1--;
        numberFactor_2 = 999 - (999 - numberFactor_1);
    }
    printf("The largest palindrome: %i\n", numberLargestPalindrome);
    printf("It's the product of %i and %i\n", factor1, factor2);
    return 0;
}

bool palindromicTest(uint32_t pNumber) {
    bool isPalindromicNumber = false;
    uint32_t numberTemp = pNumber;
    uint8_t numberE0 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    uint8_t numberE1 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    uint8_t numberE2 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    uint8_t numberE3 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    uint8_t numberE4 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    uint8_t numberE5 = numberTemp % 10;
    numberTemp = numberTemp / 10;
    if (numberE5 == 0) {
        if (numberE4 == numberE0)
            if (numberE3 == numberE1)
                isPalindromicNumber = true;
    } else if (numberE5 == numberE0)
        if (numberE4 == numberE1)
            if (numberE3 == numberE2)
                isPalindromicNumber = true;
    return isPalindromicNumber;
}