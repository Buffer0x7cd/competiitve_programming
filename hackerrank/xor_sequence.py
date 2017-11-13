def getXor(n):
    tmp = n % 8
    if tmp == 0 or tmp == 1:
        return n
    elif tmp == 2 or tmp == 3:
        return 2
    elif tmp == 4 or tmp == 5:
        return (n+2)
    elif tmp == 6 or tmp == 7:
        return 0

if __name__ == '__main__':
    q = int(input())
    for i in range(q):
        l, r = map(int, input().split(" "))
        print(getXor(l-1)^getXor(r))
    