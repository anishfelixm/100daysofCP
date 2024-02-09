def solve(a, n, k):
    flag = 0
    for i in range(1, n):
        if a[i] < a[i-1]:
            flag = 1
            break
    if flag == 0:
        return "YES"
    if k > 1:
        return "YES"
    return "NO"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        ans.append(solve(a, n, k))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()