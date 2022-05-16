small = int(input())
medium = int(input())
large = int(input())

def happiness():
    total = (1 * small) + (2 * medium) + (3 * large)
    if (total >= 10):
        return "happy"
    else:
        return "sad"

print(happiness())
