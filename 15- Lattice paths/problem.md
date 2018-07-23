# **Lattices paths**
## Problem:
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?

## Answer:
137846528820

## My Solution:
With a square having m rows and n columns, you need to go down m times and go right n times. So the answer is mC(m+n).
