''' Lapindromes'''
t = int(input())
for i in range(t):
    inputStr = input()
    list_ = list(inputStr)
    inputStrLength = len(inputStr)
    mid = int(inputStrLength/2)
    firrstHalfEnd = secondHalfStart = 0
    firrstHalfEnd = mid - 1
    secondHalfStart =  (mid + 1) if (inputStrLength & 1) else mid
    counter = 0
    a = {}
    notFound = 0
    for i in range(mid):
        key_value = list_[i]
        if key_value in a:
            a[key_value] += 1
        else:
            a[key_value] = 1
        counter += 1
    
    for i in range(secondHalfStart, inputStrLength):
        key_value = list_[i]
        if key_value in a.keys():
            a[key_value] -= 1
            counter -= 1
            if not a[key_value]:
                a.pop(key_value)
        else:
            notFound = 1
            break
    #print(a.keys())
    #print(a.values())
    if not bool(a) and not notFound:
        print("YES")
    else:
        print("NO")
        
