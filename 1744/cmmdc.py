#!/usr/bin/python3
def cmmdc(x,y):
    if y == 0:
        return x
    return cmmdc(y , x%y)

def factorize(x):
    d = 2
    while x > 1:
        p = 0
        while x % d == 0:
            x /= d
            p+=1
        if p > 0:
            print(f"{d}^{p}", end = ' * ')
        d+=1
res = cmmdc(2**3 * 3 * 5**2,2**4 * 3 ** 2 * 5 ** 7)
print(res)
factorize(res)
