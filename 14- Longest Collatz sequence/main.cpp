#include <iostream>
#include <cstdint>
#include <cstdbool>
using namespace std;

/* Global Variables */
uint32_t num = 1;
uint32_t count = 0;
uint32_t numTemp;
uint32_t countMax = 0;
uint32_t numWithMaxCount = 0;

/* Private Function */
uint32_t NextCollatzNumber(uint32_t number);


int main(int argc, char *argv[])
{
	uint32_t numMax = 1000000;
	while (num < numMax)
	{
		numTemp = num;
		count = 1;
		while (numTemp != 1)
		{
			numTemp = NextCollatzNumber(numTemp);
			count++;
		}
		cout << num << ": " << count << endl;
		if (count > countMax)
		{
			countMax = count;
			numWithMaxCount = num;
		}
		num++;
	}
	cout << numWithMaxCount << " produces the longest chain with " << countMax << " terms" << endl;
	return 0;
}

uint32_t NextCollatzNumber(uint32_t number)
{
	if ((number % 2) != 0)
		return (3 * number) + 1;
	else
		return (number / 2);
}