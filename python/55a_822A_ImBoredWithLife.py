def fact(a):
    cnt = 1
    for i in range(2, a+1):
        cnt *= i
    return cnt

def solve(a, b):
    return fact(min(a, b))

def main():
    a, b = input().split()
    a, b = int(a), int(b)
    print(solve(a, b))

if __name__ == "__main__":
    main()