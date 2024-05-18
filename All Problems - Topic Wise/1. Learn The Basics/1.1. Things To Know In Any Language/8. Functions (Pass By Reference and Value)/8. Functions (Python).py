test = int(input())
a, b = map(int, input().split())

def Maximum(x, y):
    return max(x, y)

def Swap(x, y):
    temp = x
    x = y
    y = temp

if test == 1:
    r = Maximum(a, b)
    print(r)
elif test == 2:
    Swap(a, b)
    print(a, b)
else:
    print("Invalid test option")

