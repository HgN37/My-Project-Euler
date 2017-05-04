# **Multiples of 3 and 5**
## Problem 1:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

## Answer:
233168

## My Solution:
***Find the gaps***
+ The number we need to be summed up is 3, 5, 6, 9, 10, 12, 15, 18,...
+ The gap between each number is table = {3, 2, 1, 3, 1, 2, 3} periodly.
+ while(currentNumber<100)
+ currentNumber += table[periodicIndex]
+ finalSum += currentNumber

***Better solution***
+ Sum = divideBy3 + divideBy5 - divideBy15
+ divideByX = X + 2X + 3X + ... + nX = X(1+2+3+...+n) = Xn(n+1)/2