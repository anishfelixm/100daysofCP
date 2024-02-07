def solve(a, b, n):
    for i in range(n):
        if a[i] > a[n-1]:
            a[i], b[i] = b[i], a[i]
        if b[i] > b[n-1]:
            b[i], a[i] = a[i], b[i]
        if a[i] > a[n-1] or b[i] > b[n-1]:
            return "NO"
    return "YES"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        ans.append(solve(a, b, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()