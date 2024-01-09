def main():
    ans = []
    t = int(input())
    for _ in range(t):
        w, h, n = map(int, input().split())
        cnt = 1
        while cnt < n and (w % 2 == 0 or h % 2 == 0):
            cnt *= 2
            if w % 2 == 0:
                w //= 2
            else:
                h //= 2
        if cnt >= n:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()