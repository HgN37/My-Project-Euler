#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

uint32_t currentNumber = 0;
uint32_t finalSum = 0;
uint8_t table[] = {3, 2, 1, 3, 1, 2, 3};

int main(void)
{
    uint8_t index = 0;
    while(currentNumber<1000)
    {
        if(index>6)
            index = 0;
        currentNumber += table[index];
        if(currentNumber<1000)
            finalSum += currentNumber;
        index++;
    }
    printf("finalSum = %i", finalSum);
    printf("\n");
    return 0;
}