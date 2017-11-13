import math
n = int(input())
required_digit = int(math.log(n,2)) + 1
counter = 0
while n:
    n = n & (n-1)
    counter += 1

number_of_zeroes = required_digit - counter
print(int( 2 ** number_of_zeroes))

