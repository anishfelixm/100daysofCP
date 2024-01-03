def isprime(a):
    for i in range(2,(a // 2) + 1):
        if a % i == 0:
            return False
    return True

def main():
    n, m = input().split()
    n, m = int(n), int (m)
    if not isprime(m):
        print("NO")
    else:
        flag = 0
        for i in range(n+1, m):
            if isprime(i):
                flag = 1
                break
        if flag == 0:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()