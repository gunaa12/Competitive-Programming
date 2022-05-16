start = input().split()
end = input().split()
energy = int(input())

xDiff = abs(int(end[0]) - int(start[0]))
yDiff = abs(int(end[1]) - int(start[1]))

distance = xDiff + yDiff

if (energy > distance):
    while (energy > distance):
        distance += 2
    if (energy == distance):
        print("Y")
    else:
        print("N")
else:
    print("N")
