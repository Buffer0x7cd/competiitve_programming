t = int(input())
for i in range(t):
    string = list(input())
    A = {}
    B = {}
    stringLength = len(string)
    mid = int(stringLength/2)
    for i in range(mid):
        keyValue = string[i]
        if keyValue in A:
            A[keyValue] += 1
        else:
            A[keyValue] = 1

    secondCounter = (mid + 1) if stringLength & 1 else mid

    for i in range(secondCounter,stringLength):
        keyValue = string[i]
        if keyValue in B:
            B[keyValue] += 1
        else:
            B[keyValue] = 1
    
    flag = 1

    for i in A.keys():
        try:
            if A[i] == B[i]:
                continue
            else:
                raise KeyError
        except KeyError:
            flag = 0
            break
    if(flag):
        print("YES")
    else:
        print("NO")