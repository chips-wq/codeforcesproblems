mod = 10**9+7

def solve():
    n = int(input())
    a = n
    b = n+1
    c = 4*n-1
    if a % 6 == 0:
        a//=6
        print((a * b * c * 2022) % mod)
        return
    if b % 6 == 0:
        b//=6
        print((a * b * c * 2022) % mod)
        return
    if c % 6 == 0:
        c//=6
        print((a * b * c * 2022) % mod)
        return
    if a % 2 == 0:
        a//=2
        if b % 3 == 0:
            b//=3
        elif c % 3 == 0:
            c//=3;
    elif b % 2 == 0:
        b//=2
        if a % 3 == 0:
            a//=3
        elif c % 3 == 0:
            c//=3;
    elif c % 2 == 0:
        c//=2
        if a % 3 == 0:
            a//=3
        elif b % 3 == 0:
            b//=3;
    print((a * b * c * 2022) % mod)

t = int(input())

for i in range(t):
    solve()
