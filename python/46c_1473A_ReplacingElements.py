def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, d = input().split()
        n, d = int(n), int(d)
        arr = input().split()
        for i in range(n):
            arr[i] = int(arr[i])
        arr.sort()
        if arr[-1] <= d:
            ans.append("YES")
        else:
            if arr[0] + arr[1] <= d:
                ans.append("YES")
            else:
                ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()