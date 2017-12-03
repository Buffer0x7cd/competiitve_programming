
def swap(a,i,j):
    tmp = a[i]
    a[i] = a[j]
    a[j] = tmp

t = int(input())
for i in range(t):
    n = int(input())
    numberList = list(map(int,input().split()))
    length = len(numberList)
    i = 1
    while i < length:
        if numberList[i] < numberList[i-1]:
            swap(numberList,i,i-1)
            i += 1
        i += 1
        
    j = 1
    flag = 1
    for j in range(1,length):
        if numberList[j] < numberList[j-1]:
            flag = 0
            break
    if flag:
        print("YES")
    else:
        print("NO")
