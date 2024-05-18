from typing import *
import math
def areaSwitchCase(ch: int, a: List[float]):
    ans = 0
    if ch == 1:
        ans = math.pi * a[0] * a[0]
    elif ch == 2:
        ans = a[0] * a[1]
    return "{:.5f}".format(ans)