lines = int(input())
encoded = []

for x in range (lines):
    line = input().split()
    encoded.append(line)

def printSym(num, sym):
    result = ""
    for i in range (num):
        result += sym
    print(result)

for x in encoded:
    printSym(int(x[0]), str(x[1]))