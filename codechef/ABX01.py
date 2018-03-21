


t = int(input())
for i in range(t):
    a,n = map(int, input().split())
    #print(a,n)
    num = int(pow(a,n))
    #print("Num is {0}".format(num))
    sum_ = 0

    while(num):
        digit = num % 10
        tmp = 1 + (digit + sum_ -1)% 9
        sum_ = tmp
        num = num // 10
        #print(sum_)
    print(sum_)