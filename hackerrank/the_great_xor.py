import math
t = int(input())
counter = 0
bits_required = int(math.log(t,2)) + 1
for i in range(bits_required):
    tmp = (t >> i) & 1
    if not tmp:
        counter += 2**i
print(counter)
