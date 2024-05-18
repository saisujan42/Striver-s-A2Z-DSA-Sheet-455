from math import *
from collections import *
from sys import *
from os import *

n = int(input())
if n == 1 or n == 2:
    print(1)
else:
    a = b = 1
    for i in range(3, n + 1):
        c = a + b
        a = b
        b = c
    print(c)