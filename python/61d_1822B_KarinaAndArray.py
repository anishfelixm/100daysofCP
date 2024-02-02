def solve(arr, n):
    arr.sort()
    return max(arr[0] * arr[1], arr[-1] * arr[-2])

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