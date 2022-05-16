n = int(input())
k = int(input())

sum = 0

for x in range (k + 1):
    num = n * (10 ** x)
    sum += num
    
print(sum)
