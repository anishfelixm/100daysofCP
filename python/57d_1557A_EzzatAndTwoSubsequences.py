def solve(a, n):
    avg = sum(a)
    k = max(a)
    avg -= k
    avg = avg / (n-1)
    return "{:.9f}".format(avg + k)

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans.append(solve(a, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()