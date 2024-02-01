def solve(arr, n):
    temp = list(arr)
    temp.sort()
    for i in range(n):
        if arr[i] % 2 != temp[i] % 2:
            return "NO"
    return "YES"

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