# **Largest prime factor**
## Problem:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

## Answer: 6857

## My Solution:
***Trial Division***

Divide the given number by an increasing number start from 2. Each
time the division's remainder is not 0, skip and increase the divisor by 1. When
the divident equal 1, stop, the value of the divisor is the largest prime factor 
now.

***Better solution***

An improved version of trial division can be found at problem 7.

## By the way:
600851475143 = 71 x 839 x 1471 x 6857