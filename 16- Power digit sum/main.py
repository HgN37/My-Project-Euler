power = 2 ** 1000

power_t = power
sum_t = 0
while power_t != 0:
    sum_t = sum_t + (power_t%10)
    power_t = power_t / 10

print sum_t
