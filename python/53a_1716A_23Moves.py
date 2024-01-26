def solve(n):
    if n == 1:
        return 2
    elif n % 3 == 0:
        return n // 3
    elif n % 3 == 1:
        return min(((n - 4) // 3) + 2, ((n + 2) // 3) + 1)
    else:
        return (n - 2) // 3 + 1

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