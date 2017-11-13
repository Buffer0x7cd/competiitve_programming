# problem link https://www.hackerrank.com/challenges/lonely-integer/problem

n = int(input())
array = list(map(int, input().split(" ")))
tmp = 0
for i in array:
    tmp ^= i
print(tmp)