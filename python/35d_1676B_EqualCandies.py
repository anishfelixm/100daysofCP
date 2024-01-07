def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        for i in range(n):
            arr[i] = int(arr[i])
        arr.sort()
        cnt = 0
        for i in arr:
            cnt += i - arr[0]
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()