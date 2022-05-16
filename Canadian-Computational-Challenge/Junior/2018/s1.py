firstNum = int(input())
secondNum = int(input())
thirdNum = int(input())
fourthNum = int(input())

first = (firstNum == 8 or firstNum == 9)
last = (fourthNum == 8 or fourthNum == 9)
middle = (secondNum == thirdNum)

if (first and last and middle):
    print("ignore")
else:
    print("answer")
