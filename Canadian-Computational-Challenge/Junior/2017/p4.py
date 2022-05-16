minutes = int(input())
mn = 00
hr = 12
arithemeticTime = 0

for x in range (minutes):
    mn = int(mn)
    hr = int(hr)
    mn += 1
    if (mn == 60):
        mn -= 60
        if (hr + 1 < 13):
            hr += 1
        else:
            hr = (hr + 1) % 12
    if (mn < 10):
        mn = "0" + str(mn)
    mn = str(mn)
    hr = str(hr)
    time = hr + mn
    if (len(time) == 3):
        if ((int(time[0]) - int(time[1])) == (int(time[1]) - int(time[2]))):
            arithemeticTime += 1
    elif (len(time) == 4):
        if (((int(time[0]) - int(time[1])) == (int(time[1]) - int(time[2]))) and ((int(time[1]) - int(time[2])) == (int(time[2]) - int(time[3])))):
            arithemeticTime += 1

print(arithemeticTime)
