def solve():
    n = int(input())
    s = input()
    res =  ""
    for ch in s:
        if ch == '(':
            res += "0"
        else:
            res += "1"
    print(res)

t = int(input())

for i in range(t):
    solve()
