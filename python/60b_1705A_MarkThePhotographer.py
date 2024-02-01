def solve(arr, n, x):
    arr.sort()
    for i in range(n):
        if arr[i] + x > arr[n+i]:
            return "NO"
    return "YES"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n, x))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()