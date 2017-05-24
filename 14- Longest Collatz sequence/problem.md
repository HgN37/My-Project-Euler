# **Longest Collatz sequence**
## Problem:
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

## Answer:
837799

## My Solution:
***Brute Force***
Really slow (about 3 seconds)

I think it would be better if you check your term whether have been checked before? Ex: you have already checked the sequence start with 13, it have 10 terms, now you check another number and you reach term 13, stop canculate the sequence and add 10 to the counting. That way need 2 buffers so I'm too lazy to do it yet, maybe later.