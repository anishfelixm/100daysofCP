def solve(arr, n, k):
    sum_ = 0
    for i in range(n):
        arr[i % k] = max(arr[i % k], arr[i])
    for i in range(k):
        sum_ += arr[i]
    return sum_

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