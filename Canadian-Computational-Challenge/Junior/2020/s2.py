P = int(input())
N = int(input())
R = int(input())

sick = [N]

def model():
    totalSick = 0
    while (totalSick < P):
        latestSick = len(sick) - 1
        newSick = sick[latestSick] * R
        sick.append(newSick)
        totalSick += newSick
    days = len(sick) - 1
    return days

print(model())
