T = str(input())
S = str(input())
cyclicShifts = []

for x in range (len(S)):
    firstChar = S[:1]
    rest = S[1:]
    newS = rest + firstChar
    S = newS
    cyclicShifts.append(newS)

shift = "no"
for i in cyclicShifts:
    if (T == i):
        shift = "yes"
        break

print(shift)
