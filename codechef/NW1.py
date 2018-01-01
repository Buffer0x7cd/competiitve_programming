
day_index = {"mon":0, "tues":1,"wed":2, "thurs":3, "fri":4, "sat": 5, "sun": 6}


def main():
    t = int(input())
    for i in range(t):
        days = [4]*7
        #print(days)
        inputstr = input().split()
        totaldays = int(inputstr[0])

        #print(inputstr[0], inputstr[1])
        day_index_value = day_index[inputstr[1]]
        totaldays = totaldays - 28

        for i in range(totaldays):
            index = day_index_value + i
            index = index % 7
            days[index] += 1
        
        for i in days:
            print(i, end=" ")
        print()
    return 0

if __name__ == '__main__':
    main()

