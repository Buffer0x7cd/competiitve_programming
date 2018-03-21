

def match(s1,S):
    S_length = len(S)
    flag = True
    for i in range(S_length):
        tmp = i
        flag = True
        for t in s1:
            if tmp >= S_length:
                flag = False
                break

            if t == S[tmp]:
                tmp += 1
            else:
                flag = False
                break

        if flag:
            return True
    return False        
S = input("input the entire string\n")
T = input("Input the target substring to search\n")
result = match(T,S)
if result:
    print("Found")
else:
    print("Not found")
