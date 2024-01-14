def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, n = input().split()
        a, b, n = int(a), int(b), int(n)
        cnt = 0
        a, b = min(a,b), max(a,b)
        while a <= n and b <= n:
            if cnt % 2 == 0:
                a += b
            else:
                b += a
            cnt += 1
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()