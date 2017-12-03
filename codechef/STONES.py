t = int(input())
for i in range(t):
    j = list(input())
    s = list(input())
    counter = 0
    hashMap = {}
    for i in j:
        if not i in hashMap:
            hashMap[i] = 1
    for i in s:
        try:
            if hashMap[i] == 1:
                counter += 1
        except KeyError:
            pass
    print(counter)

