#include <iostream>
#include <cstdint>
#include <cstdbool>
#include <cstring>
using namespace std;

/* Formula for this problem */
/*
    a rows, b columns
    Number of path = (a+b)Ca
    Ex: 2 rows, 2 columns
    Num of paths = 4C2 = 6
    aCb = a!/(b!.(a-b)!)
 */

/* Public Defines */
#define DEBUG
/* Public Variable */

/* Private Function Prototypes */
int vString2Int(char* pString);
/* Main function */
int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        cout << "Need 2 parameters" << endl;
        return 1;
    }
    uint64_t rows = (uint64_t)vString2Int(argv[1]);
    uint64_t cols = (uint64_t)vString2Int(argv[2]);
    uint64_t temp1 = rows*2;
    uint64_t temp2 = 1;
    int i;
    uint64_t rResult = 1;
    for(i = 0; i < rows; i++)
    {
        rResult = rResult * temp1;
        temp1--;
    }
    for(i = 0; i < rows; i++)
    {
        temp2 = temp2 * (i+1);
    }
    rResult = rResult/temp2;
    cout << rResult << endl;

    return 0;
}

/* Private Function */
int vString2Int(char* pString)
{
    int rNumber = 0;
    int vLength = strlen(pString);
    int i;
    for(i = 0; i < vLength; i++)
    {
        rNumber = rNumber*10;
        rNumber += (pString[i] - 0x30);
    }
    return rNumber;
}
