lines = int(input())
lineInfo = []

for x in range(lines):
    line = input()
    lineInfo.append(line)

def compress(x):
    result = ""
    counter = 1
    for i in range(len(x)):
        currentChar = x[i : i + 1]
        nextChar = x[i + 1: i + 2]
        if (currentChar == nextChar):
            counter += 1
            continue
        else:
            temp = str(counter) + " " + currentChar + " "
            result += temp
            counter = 1
    result = result[:len(result) - 1]
    print(result)

for x in lineInfo:
    compress(x)
