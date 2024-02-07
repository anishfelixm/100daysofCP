def solve(arr, n, k):
    arr.sort()
    for i in range(1, k+1):
        arr[n-1] += arr[n-1-i]
    return arr[n-1] - 0

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n, k))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()