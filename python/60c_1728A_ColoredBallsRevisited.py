def solve(arr, n):
    pos = 1
    mini = arr[0]
    for i in range(1, n):
        if arr[i] > mini:
            mini = arr[i]
            pos = i + 1
    return pos

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