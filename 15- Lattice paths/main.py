rows = 20
columns = 20

temp1 = rows * 2
temp2 = 1

rResult = 1

for i in range(rows):
    rResult = rResult * temp1
    temp1 = temp1 - 1

for i in range(rows):
    temp2 = temp2 * (i+1)

rResult = rResult/temp2

print rResult
