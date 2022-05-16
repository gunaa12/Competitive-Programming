numOfLines = int(input())
posTime = []

for x in range (numOfLines):
    posTime.append(input())

def stringBreaker(ind):
    endIndex = posTime[ind].index(" ")
    time = posTime[ind][:endIndex]
    pos = posTime[ind][endIndex + 1:]
    info = [time, pos]
    return info

def speedCal(pos1, time1, pos2, time2):
    dPos = int(pos2) - int(pos1)
    dTime = int(time2) - int(time1)
    speed = dPos/dTime
    if (speed < 0):
        speed = speed * -1
    return speed

def sort1(t):
    endIndex = t.index(" ")
    time = t[0:endIndex]
    return int(time)

posTime.sort(key = sort1)

maxSpeed = 0

for x in range (numOfLines - 1):
    info1 = stringBreaker(x)
    info2 = stringBreaker(x + 1)
    currentSpeed = speedCal(info1[1], info1[0], info2[1], info2[0])
    if (currentSpeed > maxSpeed):
        maxSpeed = currentSpeed

print(maxSpeed)
