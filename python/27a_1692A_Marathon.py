def main():
    count = []
    t = int(input())
    for _ in range(t):
        cnt = 0
        a, b, c, d = input().split()
        a, b, c, d = int(a), int(b), int(c), int(d)
        if b > a:
            cnt += 1
        if c > a:
            cnt += 1
        if d > a:
            cnt += 1
        count.append(cnt)
    for i in count:
        print(i)

if __name__ == "__main__":
    main()