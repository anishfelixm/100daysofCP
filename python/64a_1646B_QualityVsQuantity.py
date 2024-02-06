def solve(arr, n):
    arr.sort()
    b, r, front, back = arr[0], 0, 1, n-1
    while front < back:
        b += arr[front]
        r += arr[back]
        front += 1
        back -= 1
        if b < r:
            return "YES"
    return "NO"

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