from bisect import bisect_left, bisect_right
n = int(input())
s = {}
for i in range(n):
    d, p = map(int, input().split(" "))
    s[d] = p
cd, cp = map(int, input().split(" "))
station_distance = list(s.keys())
station_distance.sort()
counter = 0
err = -1
if ((cd - cp) > station_distance[-1]):
    print(err)
else:
    while ((cd - cp) > 0):
        tmp  = cd - cp
    #print('Remaining Distance is {0}'.format(tmp))
        i = bisect_left(station_distance, tmp)
    #print("Stoping at station at distance {0}".format(station_distance[i]))
        cp = (cp - (cd - station_distance[i]))+ s[station_distance[i]]
        cd = station_distance[i]
        counter += 1
    print(counter)