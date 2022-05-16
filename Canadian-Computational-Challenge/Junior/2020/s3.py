drops = int(input())
dropPos = []

for x in range (drops):
    pos = []
    strPos = input()
    endPos = strPos.index(",")
    pos.append(int(strPos[:endPos]))
    pos.append(int(strPos[(endPos + 1):]))
    dropPos.append(pos)

def X():
    minX = 100
    maxX = 0
    for x in dropPos:
        if (x[0] < minX):
            minX = x[0] - 1
        if (x[0] > maxX):
            maxX = x[0] + 1
    idk = [minX, maxX]
    return idk

def Y():
    minY = 100
    maxY = 0
    for y in dropPos:
        if (y[1] < minY):
            minY = y[1] - 1
        if (y[1] > maxY):
            maxY = y[1] + 1
    idk = [minY, maxY]
    return idk

x = X()
y= Y()
print(str(x[0]) + ", " + str(y[0]))
print(str(x[1]) + ", " + str(y[1]))
