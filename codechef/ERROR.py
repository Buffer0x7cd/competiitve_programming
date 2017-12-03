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
        
def main():
    t = int(input())
    for i in range(t):
        n = input()
        s1 = "101"
        s2 = "010"

        n1 = match(s1,n)
        if n1:
            print("Good")
        else:
            n2 = match(s2,n)
            if n2:
                print("Good")
            else:
                print("Bad")
if __name__ == "__main__":
    main()