# __10001st prime__
## Problem: 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

## Answer:
104743

## My solution: 
***Trial division***

- Except 1st and 2nd prime (2 and 3), all primes can be written in form 6k+/-1
- So just count up form 3 and find the 10001st prime by checking 6k+1 and 6k-1, k 
start from 0.
- Remember that if a number can't be divided (without remainers) by any number less or equal it's square root, it's a prime. This limit save very much time. Without this limit, my code take 24s to find the answer but just adding 1 line it's become 0,135s