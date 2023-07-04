
from prime import is_prime

print(is_prime(3))

if __name__ == '__main__':
    for i in range(2, 10009):
        if(is_prime(i)):
            if 10009 % i == 20000 % i:
                print(i, 10009 % i)

