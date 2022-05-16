rows = int(input())
cols = int(input())
board = []

for x in range(rows):
    colNums = []
    col = input().split()
    for i in range (cols):
        colNums.append(int(col[i]))
    board.append(colNums)

def determinePossibility(necessaryNum):
    solutions = []
    for x in range (rows):
        for i in range (cols):
            if (board[x][i] == necessaryNum):
                sol = [x, i]
                solutions.append(sol)
    return solutions

def checkAll():
    checkSquares = [[rows - 1, cols - 1],]
    solutions = determinePossibility(rows * cols)
    origin = False
    while (not origin):
        for x in solutions:
            val = x[0]*x[1]
            newSolutions = determinePossibility(val)
            for i in newSolutions:
                if (i[0] == 0 and i[1] == 0):
                    origin = True
                addable = True
                for z in checkSquares:
                    if (i == z):
                        addable = False
                if (addable):
                    checkSquares.append(newSolutions)
        solutions = newSolutions
        if (len(checkSquares) >= (rows*cols)):
            return "no"
    return "yes"

print(checkAll())
