#!/usr/bin/python

def is_prime(n):
    if n == 2:
        return True
    if n == 1 or n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i+=2
    return True

if __name__ == '__main__':
    arr = []
    cnt = 0
    for i in range(1, 10**7+1):
        if is_prime(i):
            arr.append(i)
            cnt+=1
    with open("prime.txt", "w") as f:
        f.write(str(arr))
    print(cnt)

