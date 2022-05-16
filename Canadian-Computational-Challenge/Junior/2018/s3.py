distances1 = input().split()
distances = ["0"]

for c in distances1:
    distances.append(c)

for x in range (0, len(distances)):
    distances[x] = int(distances[x])

def distance(currentCity, cityNum):
    if ((cityNum - currentCity) == 1):
        distance = abs(distances[cityNum] - distances[currentCity])
    elif ((cityNum - currentCity) == 0):
        distance = 0
    else:
        d1 = 0
        d2 = 0
        x = 0
        i = 0
        while (x < cityNum):
            d2 += distances[x]
            x += 1
        while (i <= currentCity):
            d1 += distances[i]
            i += 1
        distance = abs(d2 - d1)
        print(str(d1) + " " + str(d2))
    return distance

print(distance(3, 4))
