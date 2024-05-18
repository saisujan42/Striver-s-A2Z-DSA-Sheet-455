n = int(input())
Even = Odd = 0
while n:
    k = n % 10
    if k % 2 == 0:
        Even += k
    else:
        Odd += k
    n //= 10
print(Even, Odd)