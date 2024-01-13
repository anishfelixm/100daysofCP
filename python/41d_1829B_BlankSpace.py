def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        cnt, pos = 0, 0
        for i in range(n):
            if arr[i] == "0":
                cnt = max(cnt, i - pos + 1)
            else:
                pos = i + 1
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()