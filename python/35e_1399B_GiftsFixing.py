def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input().split()
        b = input().split()
        min_a, min_b = int(a[0]), int(b[0])
        for i in range(n):
            a[i] = int(a[i])
            b[i] = int(b[i])
            min_a = min(min_a, a[i])
            min_b = min(min_b, b[i])
        cnt = 0
        for i in range(n):
            cnt += max((a[i] - min_a),(b[i] - min_b))
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()