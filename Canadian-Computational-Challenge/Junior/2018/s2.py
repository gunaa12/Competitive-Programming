chars = int(input())
day1 = str(input())
day2 = str(input())

day1Spots = []
day2Spots = []

len1 = len(day1)
len2 = len(day2)

for x in range (len1):
    if (day1[x] == 'C'):
        day1Spots.append(x)

for x in range (len2):
    if (day2[x] == 'C'):
        day2Spots.append(x)

sameSpots = 0

for x in day1Spots:
    for i in day2Spots:
        if x == i:
            sameSpots += 1

print(sameSpots)
