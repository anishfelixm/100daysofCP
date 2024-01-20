def solve(n):
    k = n - (n % 10)
    chk1, chk2 = 0, 0
    for i in range(10):
        if (k + i) % 7 == 0:
            if chk1 == 0:
                chk1 = k + i
            else:
                chk2 = k + i
    if abs(n - chk1) > abs(n - chk2):
        return chk2
    else:
        return chk1

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans.append(solve(n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()