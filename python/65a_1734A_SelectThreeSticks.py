def solve(arr, n):
    arr.sort()
    cnt = 4000000000
    for i in range(2, n):
        cnt = min(cnt, arr[i] - arr[i-1] + arr[i-1] - arr[i-2])
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()