def generatePrimes(n):
    size = (n+1)
    primeBuffer = [1,]*size
    x = int(size/2)
    for i in range(2,x):
        if primeBuffer[i] == 1:
            id = 2
            maxSoFar = 1
            while(maxSoFar <= n):
                maxSoFar = i*id
                if maxSoFar <= n:
                    primeBuffer[maxSoFar] = 0
                id += 1
    for i in range(2,size):
        if primeBuffer[i] == 1:
            print(i)
if __name__ == "__main__":
    n = int(input())
    generatePrimes(n)