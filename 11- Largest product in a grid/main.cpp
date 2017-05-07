#include <cstdint>
#include <fstream>
#include <iostream>
using namespace std;

#define MAX_COL 20
#define MAX_ROW 20
#define ADJACENT_NUM 4

uint8_t table[MAX_ROW][MAX_COL];
uint32_t productMax = 1;
uint32_t productTemp = 1;

int main(void) {
    /* Read the number grid */
    fstream fileNumber;
    uint8_t indexCol = 0;
    uint8_t indexRow = 0;
    uint8_t fileRead;
    fileNumber.open("number.txt", ios::in);
    while (indexRow < 20) {
        fileNumber >> fileRead;
        table[indexRow][indexCol] = (fileRead - 0x30) * 10;
        fileNumber >> fileRead;
        table[indexRow][indexCol] += (fileRead - 0x30);
        if (indexCol == (MAX_COL - 1)) {
            indexCol = 0;
            indexRow++;
        } else {
            indexCol++;
        }
    }
    fileNumber.close();

    /* Find the largest product */
    // Straight Col
    indexCol = 0;
    indexRow = 0;
    while (indexRow != (MAX_ROW - ADJACENT_NUM + 1)) {
        productTemp *= table[indexRow][indexCol];
        productTemp *= table[indexRow + 1][indexCol];
        productTemp *= table[indexRow + 2][indexCol];
        productTemp *= table[indexRow + 3][indexCol];
        if (productTemp > productMax) {
            productMax = productTemp;
        }
        productTemp = 1;
        if (indexCol == (MAX_COL - 1)) {
            indexCol = 0;
            indexRow++;
        } else {
            indexCol++;
        }
    }
    // Straight Row
    indexRow = 0;
    indexCol = 0;
    while (indexRow < (MAX_ROW - 1)) {
        productTemp *= table[indexRow][indexCol];
        productTemp *= table[indexRow][indexCol + 1];
        productTemp *= table[indexRow][indexCol + 2];
        productTemp *= table[indexRow][indexCol + 3];
        if (productTemp > productMax) {
            productMax = productTemp;
        }
        productTemp = 1;
        if (indexCol == (MAX_COL - ADJACENT_NUM)) {
            indexCol = 0;
            indexRow++;
        } else {
            indexCol++;
        }
    }
    // Diagonal line (\)
    indexRow = 0;
    indexCol = 0;
    while (indexRow != (MAX_ROW - ADJACENT_NUM + 1)) {
        productTemp *= table[indexRow][indexCol];
        productTemp *= table[indexRow + 1][indexCol + 1];
        productTemp *= table[indexRow + 2][indexCol + 2];
        productTemp *= table[indexRow + 3][indexCol + 3];
        if (productTemp > productMax) {
            productMax = productTemp;
        }
        productTemp = 1;
        if (indexCol == (MAX_COL - ADJACENT_NUM)) {
            indexCol = 0;
            indexRow++;
        } else {
            indexCol++;
        }
    }
    // Diagonal line (/)
    indexCol = 3;
    indexRow = 0;
    while (indexRow != (MAX_ROW - ADJACENT_NUM + 1)) {
        productTemp *= table[indexRow][indexCol];
        productTemp *= table[indexRow + 1][indexCol - 1];
        productTemp *= table[indexRow + 2][indexCol - 2];
        productTemp *= table[indexRow + 3][indexCol - 3];
        if (productTemp > productMax) {
            productMax = productTemp;
        }
        productTemp = 1;
        if (indexCol == (MAX_COL - 1)) {
            indexCol = 3;
            indexRow++;
        } else {
            indexCol++;
        }
    }

    cout << productMax << endl;
    return 0;
}