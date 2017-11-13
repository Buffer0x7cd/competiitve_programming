n = int(input())
array = list(map(int, input().split(" ")))
counter = 0
for i in range(len(array) - 1):
    if array[i] >= array[i+1]:
        tmp = (array[i] - array[i+1]) + 1
        counter += tmp
        array[i+1] += tmp
print(counter)